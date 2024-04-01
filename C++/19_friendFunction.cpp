#include<iostream>
using namespace std;

// If a function is defined as a friend function in C++, then the protected
// and private data of a class can be accessed using the function.
// By using the keyword friend compiler knows the given function is a friend function.
// For accessing the data, the declaration of a friend function should be
// done inside the body of a class starting with the keyword friend.
//example

class student{
    int rollNo;
    string name;

    public:
    student(int rollNo,string name){
        this->rollNo=rollNo;
        this->name=name;
    }
    friend void disp(student &obj);
};
void disp(student &obj){
    cout<<"rollNo :"<<obj.rollNo<<endl;
    cout<<"name :"<<obj.name<<endl;
}
int main(){
    student s1(14,"Taj");
    // cout<<s1.rollNo<<endl;    //error due member is private
    disp(s1);

    return 0;
}