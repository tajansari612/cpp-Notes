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

class queue{
    node* head;
    node* tail;
    int size;

    public:
    queue(){
        this->size=0;
        this->head=this->tail=NULL;
    }

    void enqueue(int data){
        node* tmp=new node(data);
        if(this->head==NULL){
            this->tail=this->head=tmp;
        }else{
            this->tail->next=tmp;
            this->tail=tmp;
        }
        this->size++;
    }

    void disp(){
        if(size==0) return;
        node* curr=this->head;
        while(curr!=NULL){
            cout<<curr->data<<" ";
            curr=curr->next;
        }
    }

    void dequeue(){
        if(this->tail==NULL){
            cout<<"Underflow!!!"<<endl;
        }else{
            this->head=this->head->next;
            this->size--;
        }
        
    }

    int Size(){
        return this->size;
    }
    int front(){
        return this->head->data;
    }

    int back(){
        return this->tail->data;
    }
};
int main(){
    queue* q1=new queue();
    q1->enqueue(5);
    q1->enqueue(6);
    q1->enqueue(7);
    q1->enqueue(8);
    q1->enqueue(9);
    q1->disp();
    cout<<endl;
    cout<<q1->front()<<" "<<q1->back()<<endl;
    cout<<q1->Size()<<endl;

    q1->dequeue();
    q1->dequeue();
    q1->dequeue();
    q1->disp();
    cout<<endl;
    cout<<q1->Size()<<endl;
    cout<<q1->front()<<" "<<q1->back()<<endl;
    return 0;
}