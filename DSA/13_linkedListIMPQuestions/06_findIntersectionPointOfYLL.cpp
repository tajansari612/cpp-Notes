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
Node* insertAtTail(Node* &head,int data){
    if(head==NULL){
        Node* tmp=new Node(data);
        head=tmp;
        return head;
    }
    Node* tmp=new Node(data);
    Node* curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=tmp;
    return tmp;
}
Node* findIntersection(Node *head1, Node *head2)
{
    //Write your code here
    Node* curr=head1;
    int n1=0;
    while(curr!=NULL){
        n1++;
        curr=curr->next;
    }

    curr=head2;
    int n2=0;
    while(curr!=NULL){
        n2++;
        curr=curr->next;
    }
    Node* curr1=head1;
    Node* curr2=head2;
    while(n1!=n2){
        if(n1>n2){
            curr1=curr1->next;
            n1--;
        }else{
            curr2=curr2->next;
            n2--;
        }
    }
    while(curr1!=NULL){
        if(curr1==curr2) return curr1;
        curr1=curr1->next;
        curr2=curr2->next;
    }
    return NULL;
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
    cout<<"Enter the length of SLL1 :";
    cin>>n1;
    Node* head1=NULL;
    Node* tail1=NULL;
    cout<<"Enter the elements of SLL1 :";
    for(int i=0;i<n1;i++){
        int data;
        cin>>data;
        tail1=insertAtTail(head1,data);
    }

    int n2;
    cout<<"Enter the length of SLL2 :";
    cin>>n2;
    Node* head2=NULL;
    Node* tail2=NULL;
    cout<<"Enter the elements of SLL2 :";
    for(int i=0;i<n2;i++){
        int data;
        cin>>data;
        tail2=insertAtTail(head2,data);
    }

    int n3;
    cout<<"Enter the length of intersection LL :";
    cin>>n3;
    Node* head3=NULL;
    Node* tail3=NULL;
    cout<<"Enter the elements of intersection LL :";
    for(int i=0;i<n3;i++){
        int data;
        cin>>data;
        tail3=insertAtTail(head3,data);
    }
    tail1->next=head3;
    tail2->next=head3;
    Node* head=findIntersection(head1,head2);
    // disp(head1);
    // disp(head2);
    if(head==NULL){
        cout<<"No Intersection present!"<<endl;
    }else{
        cout<<"Intersection is present from :";
    }
    disp(head);
    return 0;
}