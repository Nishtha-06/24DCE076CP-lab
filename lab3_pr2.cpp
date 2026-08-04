#include<iostream>
#include<vector>
#include <utility>
using namespace std;

int fun(int a,int b,int &x,int &y){
    
    
    if(b == 0){
        x = 1;
        y = 0;
        return a;
    }
    int x1,y1;
    int gcd = fun(b,a%b,x1,y1);

    x = y1;
    y = x1 - (a/b)*y1;

    return gcd;
}

int main(){

    int a = 35;
    int b = 15;

    int x,y;
    int g = fun(a,b,x,y);
    cout<<"gcd = "<<g<<endl;
    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;


}

//O(log(min(a,b))
