#include<iostream>
using namespace std;

int fun(int n){
    if(n<5){
        return 0;
    }
    int i = 5;
    int temp = n;
    int count = 0;
    while(temp>=5){

        cout<<temp<<"/"<<i<<" = ";
        temp = n/i;
        i = i*5;
        cout<<temp<<endl;
        count = count + temp ;
    }
    return count;
}
int main(){
    int n = 25;
    // cin>>n;

    cout<<(fun(n));
}