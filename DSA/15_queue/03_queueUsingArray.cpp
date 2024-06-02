#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

class Queue{
    int front;
    int back;
    int size;
    vector<int> arr;

    public:
    Queue(){
        this->front=this->back=-1;
        this->size=0;
    }

    void enqueue(int data){
        if(this->size==0){
            this->front=this->back=0;
        }else{
            this->back++;
        }
        arr.push_back(data);
        this->size++;
    }


    void dequeue(){
        if(this->back==-1){
            cout<<"Underflow!!!"<<endl;
        }else if(this->back == this->front){
            this->back=this->front=-1;
        }else{
            this->front++;
            this->size--;
        }
    }

    int Front(){
        if(this->front==-1){
            cout<<"Queue is empty! ";
            return INT_MIN;
        }else{
            return this->arr[front];
        }
    }

    int Back(){
        if(this->back==-1){
            cout<<"Queue is empty! ";
            return INT_MIN;
        }else{
            return this->arr[back];
        }
    }
    void disp(){
        for(int i=this->front;i<=this->back;i++){
            cout<<this->arr[i]<<" ";
        }cout<<endl;
    }
};
int main(){
    Queue q1;
    q1.enqueue(12);
    q1.enqueue(14);
    q1.enqueue(16);
    q1.enqueue(18);
    q1.enqueue(20);
    cout<<endl;
    q1.disp();
    cout<<q1.Front()<<" "<<q1.Back()<<endl;

    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    q1.disp();
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    cout<<q1.Front()<<" "<<q1.Back()<<endl;

    return 0;
}