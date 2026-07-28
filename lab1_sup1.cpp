#include<iostream>
#include<vector>

using namespace std;

class Node {
    public:
    int val;
    Node* next;

    Node(int data){
        val = data;
        next = NULL;
    }
};

void insertFromTail(Node* &head,int value){
    Node* newNode = new Node(value);
    if(head == NULL){
        head = newNode; 
          
    }
    else{
        Node* temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        
        temp->next = newNode;
        newNode->next = NULL;
    }
}

string fun(string s1,string s2){
    int a = stoi(s1);
    int b = stoi(s2);
    cout<< a+b<<endl;
    return to_string(a+b);
}
int main(){
    Node* head = NULL;
    insertFromTail(head,7);
    insertFromTail(head,2);
    insertFromTail(head,4);
    insertFromTail(head,3);

    Node* head1 = NULL;
    insertFromTail(head1,5);
    insertFromTail(head1,6);
    insertFromTail(head1,4);
    
    Node* temp1 = head;
    Node* temp2 = head1;

    string s1 = "";
    while(temp1!=NULL){
        s1.push_back(temp1->val+'0');
        cout<<temp1->val<<" ";
        temp1 = temp1->next;
    }
    cout<<endl;
    string s2 = "";
    while(temp2!=NULL){
        s2.push_back(temp2->val+'0');
        cout<<temp2->val<<" ";
        temp2 = temp2->next;
    }
    cout<<endl;
    string x = fun(s1,s2);
    Node* head2 = NULL;

    for(char ch:x){
        insertFromTail(head2,ch - '0');
    }
    Node* temp3 = head2;
    while(temp3!=NULL){
        cout<<temp3->val;
        temp3 = temp3->next;
    }
}