#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void insertAtTail(node* &head,int data){
    if(head==NULL){
        node* tmp=new node(data);
        head=tmp;
        return;
    }
    node* tmp=new node(data);
    node* curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=tmp;
}
void reverseSLL(node* &head){
    node* prev=head;
    node* curr=head;
    node* nxt=head;
    while(curr!=NULL){
        nxt=nxt->next;
        curr->next=prev;
        prev=curr;
        curr=nxt;
    }
    head->next=NULL;
    head=prev;
}
void disp(node* head){
    node* curr=head;
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
    node* head=NULL;
    cout<<"Enter the elements :";
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        insertAtTail(head,data);
    }
    // disp(head);
    reverseSLL(head);
    disp(head);
    return 0;
}