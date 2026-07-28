#include<iostream>
#include<vector>

using namespace std;

vector<int> fun(vector<int> v,int k,int n){
    vector<int> ans(n,0);
    if(k == 0){
        return ans;
    }

    for(int i=0;i<n;i++){
        if(k>0){
            for(int j=1;j<=k;j++){
                ans[i] = ans[i] + v[(i+j) % n];
            }
        }
        else{
            for(int j=1;j<= -k;j++){
                ans[i] = ans[i] + v[(i-j+k)%n];
            }
        }
    }
    return ans;
}
int main(){
    vector<int> v = {5,7,1,4};
    int k = 3;

    vector<int> ans = fun(v,k,v.size());
    for(int i=0;i<ans.size();i++){
        cout<< ans[i] <<" ";
    }
}