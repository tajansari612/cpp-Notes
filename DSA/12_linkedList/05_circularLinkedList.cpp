#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int data){
        this->data=data;
        this->next=this;
    }
};
void disp(node* tail){
    node* curr=tail->next;
    while(curr!=tail){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<curr->data<<" ";
    cout<<endl;
}
int main(){
    node* tail=new node(10);
    node* n2=new node(12);
    tail->next=n2;
    n2->next=tail;
    tail=n2;

    disp(tail);

    return 0;
}