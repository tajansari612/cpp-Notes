#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int>* q1=new queue<int>();
    q1->push(12);
    q1->push(14);
    q1->push(16);
    q1->push(18);
    q1->push(20);
    cout<<q1->size()<<endl;
    cout<<q1->front()<<endl;
    cout<<q1->back()<<endl;

    q1->pop();
    q1->pop();
    q1->pop();
    cout<<q1->size()<<endl;
    cout<<q1->front()<<endl;
    cout<<q1->back()<<endl;

    cout<<q1->empty()<<endl;
    q1->pop();
    q1->pop();
    cout<<q1->empty()<<endl;
    return 0;
}