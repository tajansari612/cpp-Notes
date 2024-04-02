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
void reverseSLLByK(node* &head,int k){
    int n=0;
    node* curr=head;
    while(curr!=NULL){
        curr=curr->next;
        n++;
    }

    node* imp=head;
    curr=head;
    node* prev=NULL;
    node* nxt=head;
    for(int i=0;i<k;i++){
        nxt=nxt->next;
        curr->next=prev;
        prev=curr;
        curr=nxt;
    }
    n-=k;
    head=prev;
    while(n>=k){
        node* p=curr;
        for(int i=0;i<k;i++){
            nxt=nxt->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        imp->next=prev;
        imp=p;
        n-=k;
    }
    imp->next=curr;
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
    reverseSLLByK(head,k);
    disp(head);
    return 0;
}