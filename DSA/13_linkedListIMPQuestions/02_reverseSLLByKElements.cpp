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
node* solve(node* head,int k,int n){
    if(head==NULL) return NULL;
    if(n<k){
        return head;
    }
    node* prev=NULL;
    node* curr=head;
    node* next=NULL;
    int ctr=0;
    while(curr!=NULL && ctr<k){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        ctr++;
    }
    n-=k;
    if(next!=NULL){
        head->next=solve(next,k,n);
    }
    return prev;
}

node* reverseSLLByKGroups(node* head, int k) {
    int n=0;
    node* curr=head;
    while(curr!=NULL){
        n++;
        curr=curr->next;
    }
    head=solve(head,k,n);
    return head;
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
    int k;
    cout<<"Enter the k :";
    cin>>k;
    // disp(head);
    head=reverseSLLByKGroups(head,k);
    disp(head);
    return 0;
}