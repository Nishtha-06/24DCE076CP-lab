#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    
    vector<int> v = {0,1};
    int n = v.size();
    
    int exor1 = 0;
    for(int i=0;i<=n;i++){
        exor1 = exor1^i;
    }
    for(int i=0;i<n;i++){
        exor1 = exor1^v[i];
    }
    cout<<exor1;


}