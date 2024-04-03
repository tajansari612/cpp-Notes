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
Node *addTwoNumbers(Node *num1, Node *num2){
    // Write your code here.
    Node* head1=num1;
    Node* head2=num2;
    Node* head=NULL;
    Node* tail=NULL;
    int carry=0;
    while(head1!=NULL && head2!=NULL){
        if(tail==NULL){
            int data=head1->data+head2->data+carry;
            int rem=data%10;
            carry=data/10;
            Node* tmp=new Node(rem);
            tail=tmp;
            head=tail;
        }else{
            int data=head1->data+head2->data+carry;
            int rem=data%10;
            carry=data/10;
            Node* tmp=new Node(rem);
            tail->next=tmp;
            tail=tmp;
        }
        head1=head1->next;
        head2=head2->next;

    }
    while(head1!=NULL){
        if(tail==NULL){
            int data=head1->data+carry;
            int rem=data%10;
            carry=data/10;
            Node* tmp=new Node(rem);
            tail=tmp;
            head=tail;
        }else{
            int data=head1->data+carry;
            int rem=data%10;
            carry=data/10;
            Node* tmp=new Node(rem);
            tail->next=tmp;
            tail=tmp;
        }
        head1=head1->next;
    }
    while(head2!=NULL){
        if(tail==NULL){
            int data=head2->data+carry;
            int rem=data%10;
            carry=data/10;
            Node* tmp=new Node(rem);
            tail=tmp;
            head=tail;
        } else {
            int data = head2->data + carry;
            int rem = data % 10;
            carry = data / 10;
            Node *tmp = new Node(rem);
            tail->next = tmp;
            tail = tmp;
        }
        head2 = head2->next;
    }
    if(carry>0){
        Node* tmp=new Node(carry);
        tail->next=tmp;
        tail=tmp;
    }
    return head;

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
    cout<<"Enter the elements of SLL1 :";
    for(int i=0;i<n1;i++){
        int data;
        cin>>data;
        insertAtTail(head1,data);
    }

    int n2;
    cout<<"Enter tha length of SLL2 :";
    cin>>n2;
    Node* head2=NULL;
    cout<<"Enter the elements of SLL2 :";
    for(int i=0;i<n2;i++){
        int data;
        cin>>data;
        insertAtTail(head2,data);
    }
    Node* head=addTwoNumbers(head1,head2);
    disp(head1);
    disp(head2);
    disp(head);
    return 0;
}