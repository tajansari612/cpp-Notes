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

void insertAtHead(node* &head,int data){
    node* tmp=new node(data);
    tmp->next=head;
    head=tmp;
}
void insertAtTail(node* &head,int data){
    node* tmp=new node(data);
    node* curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=tmp;
}
void insertAtKthPos(node* &head,int k,int data){
    node* tmp=new node(data);
    node* curr=head;
    while(k>2){
        curr=curr->next;
        k--;
    }
    tmp->next=curr->next;
    curr->next=tmp;
}
void deleteAtHead(node* &head){
    node* temp=head;
    head=head->next;
    free(temp);
}
void deleteAtTail(node* &head){
    node* curr=head;
    while(curr->next->next!=NULL){
        curr=curr->next;
    }
    node* tmp=curr->next;
    curr->next=NULL;
    free(tmp);
}
void deleteAtKthPos(node* &head,int k){
    node* curr=head;
    while(k>2){
        curr=curr->next;
        k--;
    }
    node* tmp=curr->next;
    curr->next=curr->next->next;
    free(tmp);
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
    node* head=new node(12);

    node* n2=new node(14);
    head->next=n2;

    node* n3=new node(16);
    n2->next=n3;

    node* n4=new node(18);
    n3->next=n4;

    node* n5=new node(20);
    n4->next=n5;

    disp(head);

    insertAtHead(head,10);
    disp(head);

    insertAtHead(head,8);
    insertAtHead(head,6);
    insertAtHead(head,4);
    insertAtHead(head,2);
    insertAtHead(head,1);
    disp(head);

    insertAtTail(head,24);
    disp(head);

    insertAtKthPos(head,4,5);
    disp(head);

    insertAtKthPos(head,3,3);
    insertAtKthPos(head,7,7);
    insertAtKthPos(head,9,9);
    disp(head);

    deleteAtHead(head);
    disp(head);
    deleteAtHead(head);
    deleteAtHead(head);
    deleteAtHead(head);
    disp(head);

    deleteAtTail(head);
    deleteAtTail(head);
    deleteAtTail(head);
    disp(head);

    deleteAtKthPos(head,3);
    deleteAtKthPos(head,3);
    deleteAtKthPos(head,3);
    disp(head);
    return 0;
}