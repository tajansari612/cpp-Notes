#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* prev;
    node* next;

    node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
};
void insertAtHead(node* &head,int data){
    if(head==NULL){
        node* tmp=new node(data);
        head=tmp;
    }else{
        node* tmp=new node(data);
        tmp->next=head;
        head->prev=tmp;
        head=tmp;
    }
    
}
void insertAtTail(node* &tail,int data){
    if(tail==NULL){
        node* tmp=new node(data);
        tail=tmp;
    }else{
        node* tmp=new node(data);
        tail->next=tmp;
        tmp->prev=tail;
        tail=tmp;
    }
    
}
void insertAtKthPos(node* &head,int k,int data){
    node* tmp=new node(data);
    node* curr=head;
    while(k>2){
        curr=curr->next;
        k--;
    }
    tmp->next=curr->next;
    curr->next->prev=tmp;
    curr->next=tmp;
    tmp->prev=curr;

}
void deleteAtHead(node* &head){
    node* temp=head;
    head=head->next;
    head->prev=NULL;
    free(temp);
}
void deleteAtTail(node* &tail){
    node* tmp=tail;
    tail=tail->prev;
    tail->next=NULL;
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
    curr->next->prev=curr;

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
void reverseDisp(node* &tail){
    node* curr=tail;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->prev;
    }
    cout<<endl;
}
int main(){
    node* head=NULL;
    node* tail=head;

    // insertAtHead(head,10);
    // insertAtHead(head,12);
    // insertAtHead(head,14);
    // insertAtHead(head,16);
    // insertAtHead(head,18);
    // disp(head);

    insertAtTail(tail,12);
    head=tail;
    insertAtTail(tail,14);
    insertAtTail(tail,16);
    insertAtTail(tail,18);
    insertAtTail(tail,20);
    disp(head);

    insertAtKthPos(head,3,24);
    insertAtKthPos(head,3,26);
    insertAtKthPos(head,3,28);
    disp(head);
    // reverseDisp(tail);

    deleteAtHead(head);
    // deleteAtHead(head);
    // deleteAtHead(head);
    disp(head);

    deleteAtTail(tail);
    // deleteAtTail(tail);
    // deleteAtTail(tail);
    disp(head);

    deleteAtKthPos(head,3);
    deleteAtKthPos(head,3);
    deleteAtKthPos(head,3);
    disp(head);
    reverseDisp(tail);



    return 0;
}