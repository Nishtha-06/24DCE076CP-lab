#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v = {3,10,5,25,2,8};
    int n = v.size();

    int mini = INT_MIN;
    for(int i=0;i<n;i++){
        
        for(int j=i;j<n;j++){
            mini = max(mini,v[j]^v[i]);
            
        }
    }
    cout<<mini;
}