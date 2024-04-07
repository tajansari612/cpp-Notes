#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void insertAtTail(Node* &head,int data){
    if(head==NULL){
        Node* tmp=new Node(data);
        head=tmp;
        return;
    }
    Node* tmp=new Node(data);
    Node* curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=tmp;
}
Node* detectCycle(Node *head)
{
	//	Write your code here
    if(head==NULL || head->next==NULL) return NULL;
    Node* slow=head;
    Node* fast=head;
    slow=slow->next;
    fast=fast->next->next;
    while(fast!=NULL && fast->next!=NULL){
        if(slow==fast){
            break;
        }
        slow=slow->next;
        fast=fast->next->next;
    }
    slow=head;
    while(fast!=NULL && fast->next!=NULL){
        if(slow==fast){
            return slow;
        }
        slow=slow->next;
        fast=fast->next;
    }
    return NULL;
}
void disp(Node* head){
    Node* curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter tha length of SLL :";
    cin>>n;
    Node* head=NULL;
    cout<<"Enter the elements :";
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        insertAtTail(head,data);
    }
    int loop;
    cout<<"Enter the position(1-based) for cycle if not enter -1 :";
    cin>>loop;
    
    if(loop>0){
        Node* ptr=head;
        while(loop>1){
            loop--;
            ptr=ptr->next;
        }
        Node* tail=head;
        while(tail->next!=NULL){
            tail=tail->next;
        }
        tail->next=ptr;
    }
    
    // disp(head);
    Node* loopStPtr=detectCycle(head);
    if(loopStPtr!=NULL){
        int ptr=1;
        Node* curr=head;
        while(curr!=loopStPtr){
            ptr++;
            curr=curr->next;
        }
        cout<<"Yes Loop is Present at position :"<<ptr<<endl;
    }else{
        cout<<"Loop is not Present"<<endl;
    }
    return 0;
}