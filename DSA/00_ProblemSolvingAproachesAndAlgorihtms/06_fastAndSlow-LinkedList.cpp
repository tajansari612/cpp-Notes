#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void insertAtTail(Node* &head,int data){
    if(head==NULL){
        Node* tmp=new Node(data);
        head=tmp;
        return;
    }
    Node* tmp=new Node(data);
    Node* curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=tmp;
}
Node* middleOfSLL(Node* head)
{
    // Write your code here
    Node* fast=head;
    Node* slow=head;

    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    
    return slow;
}
void disp(Node* head){
    Node* curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter tha length of SLL :";
    cin>>n;
    Node* head=NULL;
    cout<<"Enter the elements :";
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        insertAtTail(head,data);
    }
    // disp(head);
    Node* middle=middleOfSLL(head);
    cout<<middle->data<<endl;
    return 0;
}