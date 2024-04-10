#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// time complexity of push, pop, top, isEmpty, isFull, size should be O(1)
class Stack{
    int capacity;
    int* arr;
    int top_ind;

    public:
    Stack(int c){
        this->capacity=c;
        this->arr=new int[capacity];
        this->top_ind=-1;
    }

    //functions

    void push(int ele){
        if(this->top_ind == this->capacity-1){
            cout<<"Overflow!"<<endl;
            return;
        }
        this->top_ind++;
        this->arr[this->top_ind]=ele;
    }

    void pop(){
        if(this->top_ind == -1){
            cout<<"Underflow!\n";
            return;
        }
        this->top_ind--;
    }

    int top(){
        if(this->top_ind == -1){
            cout<<"Underflow!\n";
            return INT_MIN;
        }
        return this->arr[this->top_ind];
    }

    int size(){
        return this->top_ind+1;
    }

    bool isEmpty(){
        return this->top_ind == -1;
    }

    bool isFull(){
        return this->top_ind == this->capacity-1;
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
    cout<<"top ele :"<<st->top()<<endl;
    st->pop();  //underflow
    cout<<"top ele :"<<st->top()<<endl;

    return 0;
}