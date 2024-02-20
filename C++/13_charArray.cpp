#include<iostream>
using namespace std;

int main(){
    char name[20];
    int len=sizeof(name);
    cout<<len<<" ";
    cout<<"Enter your name :";
    
    cin>>name;
    len=sizeof(name);
    cout<<name<<" "<<len<<endl; 

    name[4]='\0';
    cout<<name<<" "<<len<<endl;   //only prints 4 characters

    return 0;
}