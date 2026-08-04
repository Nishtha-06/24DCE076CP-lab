#include <iostream>
using namespace std;

//O(log n)

// Number of trailing 0
int main(){
    int n,count=0;
    cin>>n;

    while(n>=5){

        n /= 5;
        count += n;
        
    }
    cout<<count;
}
