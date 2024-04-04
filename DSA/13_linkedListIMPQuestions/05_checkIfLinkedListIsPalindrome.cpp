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

Node* reverse(Node* head){
    Node* curr=head;
    Node* prev=NULL;
    Node* nxt=head;
    while(curr!=NULL){
        nxt=nxt->next;
        curr->next=prev;
        prev=curr;
        curr=nxt;
    }
    return prev;
}

bool isPalindrome(Node *head)
{
    // write your code here
    Node* curr=head;

    //counting total elements
    int n=0;
    while(curr!=NULL){
        n++;
        curr=curr->next;
    }
    if(n==1) return true;

    //finding mid point
    curr=head;
    int mid=n/2;
    
    while(mid>1){
        mid--;
        curr=curr->next;
    }
    
    //breaking linked list at middle
    if(n%2==0){
        Node* tmp=curr;
        curr=curr->next;
        tmp->next=NULL;
    }else{
        Node* tmp=curr;
        curr=curr->next->next;
        tmp->next=NULL;
    }
    
    //reversing 2nd LL
    Node* nHead=reverse(curr);

    //compairing bot LLs
    while(head!=NULL){
        if(head->data!=nHead->data) return false;
        head=head->next;
        nHead=nHead->next;
    }
    return true;
    
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
    bool ans=isPalindrome(head);
    if(ans==1){
        cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
    }
    return 0;
}