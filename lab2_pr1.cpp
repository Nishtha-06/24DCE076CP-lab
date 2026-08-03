#include<iostream>
#include<vector>
using namespace std;

// O(n)

// A teacher's assistant at a school where every student in a class is assigned a unique roll number from 0 to n
// collects the roll numbers of every student who submitted their exam paper. Exactly one student is absent, and
// their roll number is the only one missing from the collected list. Determine which single roll number never
// showed up, without maintaining a separate attendance sheet and without re-sorting the stack of papers.
// Input: Integer array nums containing n distinct numbers, each in the range [0, n].
// Output: The single integer in [0, n] that does not appear in nums.
// Example 1: Input: nums = [3,0,1]
// Output: 2

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
