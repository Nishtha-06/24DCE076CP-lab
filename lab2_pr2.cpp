#include<iostream>
#include<vector>
using namespace std;

//O(n)

// A warehouse's inventory log lists every product code twice — once per unit shipped in its safety-stock pair —
// except for exactly two product codes that arrived as singles. Using only O(1) extra memory and a single pass,
// identify both singleton codes.
// Input: Integer array nums where every element appears exactly twice except two elements that appear exactly
// once.
// Output: The two elements that appear only once, in any order.
// Example 1: Input: nums = [1,2,1,3,2,5]
// Output: [3,5]
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
