#include<iostream>
#include<vector>
#include<list>

using namespace std;

//Time Complexity = O(n + m)

//Two departments each maintain a sorted linked list of employee ID records. For an upcoming audit, the two
// registries must be combined into a single sorted linked list by splicing together the existing nodes, preserving the
// sorted order throughout.
// Input: Heads of two sorted linked lists, list1 and list2.
// Output: Head of the merged sorted linked list.
// Example 1: Input: list1 = [1,2,4], list2 = [1,3,4]
// Output: [1,1,2,3,4,4]

list<int> fun(vector<int> v1,vector<int> v2){
    list<int> ans;
    if(v1.size() == 0 || v2.size() == 0){
        return ans;
    }

    int i = 0;
    int j = 0;
    while(i<v1.size() && j<v2.size()){
        if(v1[i] < v2[j]){
            ans.push_back(v1[i]);
            i++;
        }
        else if(v1[i] == v2[j]){
            ans.push_back(v1[i]);
            ans.push_back(v2[j]);
            i++;
            j++;
        }
        else{
            ans.push_back(v2[j]);
            j++;
        }
    } 
    while(i<v1.size()){
        ans.push_back(v1[i]);
        i++;
    }
    while(j<v2.size()){
        ans.push_back(v2[j]);
        j++;
    }
    return ans;
}
int main(){
    list<int> l1 = {1,2,4};
    list<int> l2 = {1,3,4};
    vector<int> v1;
    vector<int> v2;
    for(auto it:l1){
        v1.push_back(it);
    }
    for(auto it:l2){
        v2.push_back(it);
    }

    list<int> ans = fun(v1,v2);
    for(auto it:ans){
        cout << it << " ";
    }
}
