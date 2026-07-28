#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {1,2,1,3,2,5};
    int n = v.size();

    int exor=0;
    for(int i=0;i<n;i++){
        exor = exor^v[i];
    }
    int rightMost_SetBit = exor & (-exor);

    int num1 = 0;
    int num2 = 0;
    for(int num:v){
        if((num & rightMost_SetBit) != 0){
            num1 = num1 ^ num;
        }
        else{
            num2 = num2 ^ num;
        }
    }
    cout<<num1<<" "<<num2<<endl;

}