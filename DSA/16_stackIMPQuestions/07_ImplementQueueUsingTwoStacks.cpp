#include<iostream>
#include<stack>
using namespace std;

class MyQueue {
    stack<int> s1;
    stack<int> s2;

    public:
    MyQueue() {
        
    }
    
    void push(int x) {
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        s2.push(x);
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }
    
    int pop() {
        int tmp=s1.top();
        s1.pop();
        return tmp;
    }
    
    int peek() {
        return s1.top();
    }
    
    bool empty() {
        return s1.empty();
    }
};

int main(){
    MyQueue q1;
    q1.push(12);
    q1.push(14);
    q1.push(16);
    q1.push(18);

    cout<<q1.peek()<<endl;

    q1.pop();
    cout<<q1.peek()<<endl;

    q1.pop();
    cout<<q1.peek()<<endl;

    q1.pop();
    cout<<q1.peek()<<endl;

    q1.pop();
    cout<<q1.empty()<<endl;

    return 0;
}