#include <iostream>
using namespace std;

//O(log n)
int main(){
    int n,count=0;
    cin>>n;

    while(n>=5){

        n /= 5;
        count += n;
        
    }
    cout<<count;
}
