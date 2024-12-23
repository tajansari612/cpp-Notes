#include<iostream>
using namespace std;

// Abstraction in C++ is an object-oriented programming concept that focuses on 
// hiding the complex implementation details and showing only the necessary 
// features of an object. 

// How Abstraction is Achieved in C++
// Abstraction is typically achieved using:
// 1. Abstract Classes (using pure virtual functions)
// 2. using private access modifier


class shape{

    public:

    //Pure virtual function (at least one pure virtual function should be 
    // present in class to be abstract class)
    virtual void draw() = 0;

    //Non-pure virtual function
    virtual void info(){
        cout<<"This is a shape!\n";
    }

}; 

class circle : public shape{
    public:

    //overriding pure virtual function
    void draw() override {
        cout << "Drawing a circle.\n";
    }

    //overriding non-pure virtual function
    void info() override {
        cout << "This is a circle.\n";
    }
};

class square : public shape{
    public: 

     //overriding pure virtual function
    void draw() override {
        cout << "Drawing a square.\n";
    }

    //overriding non-pure virtual function
    void info() override {
        cout << "This is a square.\n";
    }
};
int main(){
    //Object of shape can not be created as it is a abstract class
    shape* c1 = new circle();
    c1->draw();
    c1->info();

    //without new keyword
    shape* s1;
    square sq1;
    s1 = &sq1;
    s1->info();
    s1->draw();

    delete c1;
    delete s1;
    return 0;
}