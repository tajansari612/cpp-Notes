#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(){
        this->data=0;
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    Node(int data,Node* next){
        this->data=data;
        this->next=next;
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
Node* sortTwoLists(Node* first, Node* second)
{
    // Write your code here.
    Node* ans=new Node(0);
    if(first->data<=second->data){
        ans->next=first;
        ans=first;
        first=first->next;
    }else{
        ans->next=second;
        ans=second;
        second=second->next;
    }
    Node* curr=ans;
    while(first!=NULL && second!=NULL){
        if(first->data<=second->data){
            curr->next=first;
            curr=first;
            first=first->next;
        }else{
            curr->next=second;
            curr=second;
            second=second->next;
        }
    }
    if(first!=NULL){
        curr->next=first;
    }else{
        curr->next=second;
    }
    return ans;


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
    int n1;
    cout<<"Enter tha length of SLL1 :";
    cin>>n1;
    Node* head1=NULL;
    cout<<"Enter the elements of SLL1 in sorted order :";
    for(int i=0;i<n1;i++){
        int data;
        cin>>data;
        insertAtTail(head1,data);
    }

    int n2;
    cout<<"Enter tha length of SLL2 :";
    cin>>n2;
    Node* head2=NULL;
    cout<<"Enter the elements of SLL2 in sorted order :";
    for(int i=0;i<n2;i++){
        int data;
        cin>>data;
        insertAtTail(head2,data);
    }
    Node* head=sortTwoLists(head1,head2);
    // disp(head1);
    // disp(head2);
    disp(head);
    return 0;
}