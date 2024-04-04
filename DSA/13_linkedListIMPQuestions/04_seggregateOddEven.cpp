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
Node* segregateEvenOdd(Node* head)
{
    // Write your code here
    Node* even=NULL;
    Node* odd=NULL;
    Node* curr=head;
    Node* head2=NULL;
    Node* head1=NULL;
   
    while(curr!=NULL){
        if(curr->data%2==0){

            if(even==NULL){
                even=curr;
                head1=even;
            }else{
                even->next=curr;
                even=curr;
            }

        }else{

            if(odd==NULL){
                odd=curr;
                head2=odd;
            }else{
                odd->next=curr;
                odd=curr;
            }
            
        }
        curr=curr->next;
    }
    odd->next=NULL;
    even->next=head2;
    return head1;
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
    head=segregateEvenOdd(head);
    disp(head);
    return 0;
}