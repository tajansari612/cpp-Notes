#include<iostream>
#include<queue>
using namespace std;

class MyStack {
    queue<int> q1;
    queue<int> q2;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        q2.push(x);
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1,q2);
    }
    
    int pop() {
        int tmp=q1.front();
        q1.pop();
        return tmp;
    }
    
    int top() {
        return q1.front();
    }
    
    bool empty() {
        return q1.empty();
    }
};

int main(){
    MyStack s1;
    s1.push(12);
    s1.push(14);
    s1.push(16);
    s1.push(18);

    cout<<s1.empty()<<endl;
    cout<<s1.top()<<endl;

    s1.pop();
    cout<<s1.top()<<endl;

    s1.pop();
    cout<<s1.top()<<endl;

    s1.pop();
    cout<<s1.top()<<endl;

    s1.pop();
    cout<<s1.top()<<endl;
    
    cout<<s1.empty()<<endl; 
    return 0;
}