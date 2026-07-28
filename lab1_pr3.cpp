#include<iostream>
#include<vector>

using namespace std;

string fun(string n1,string n2){
    int a = stoi(n1);
    int b = stoi(n2);

    return to_string(a*b);

}
int main(){
    string n1 = "123";
    string n2 = "456";
    
    string n3 = fun(n1,n2);
    cout<<n3;
}