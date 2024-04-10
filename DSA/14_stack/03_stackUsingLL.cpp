#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// time complexity of push, pop, top, isEmpty, isFull, size should be O(1)
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

class Stack{
    int capacity;
    int curr_size;
    Node* head;

    public:
    Stack(int c){
        this->capacity=c;
        this->head=NULL;
        this->curr_size=0;
    }

    //functions

    void push(int ele){
        if(this->curr_size == this->capacity){
            cout<<"Overflow!"<<endl;
            return;
        }
        Node* tmp=new Node(ele);
        tmp->next=this->head;
        head=tmp;
        curr_size++;
    }

    void pop(){
        if(this->head == NULL){
            cout<<"Underflow!\n";
            return;
        }
        Node* tmp=head;
        head=head->next;
        free(tmp);
        curr_size--;
    }

    int top(){
        if(this->head == NULL){
            cout<<"Underflow!\n";
            return INT_MIN;
        }
        return this->head->data;
    }

    int size(){
        return this->curr_size;
    }

    bool isEmpty(){
        return this->head == NULL;
    }

    bool isFull(){
        return this->curr_size == this->capacity;
    }

};
int main(){
    Stack* st=new Stack(5);
    
    cout<<"size of stack is :"<<st->size()<<endl;
    cout<<st->isEmpty()<<endl;

    st->push(12);
    st->push(14);
    st->push(16);
    st->push(18);
    st->push(20);
    // st->push(22);   //overflow
    cout<<"size of stack is :"<<st->size()<<endl;
    cout<<"top ele :"<<st->top()<<endl;
    cout<<st->isFull()<<endl;

    st->pop();
    cout<<"top ele :"<<st->top()<<endl;
    st->pop();
    cout<<"top ele :"<<st->top()<<endl;
    st->pop();
    cout<<"top ele :"<<st->top()<<endl;
    st->pop();
    cout<<"top ele :"<<st->top()<<endl;
    st->pop();
    // cout<<"top ele :"<<st->top()<<endl;  //underflow
    // st->pop();  //underflow

    return 0;
}