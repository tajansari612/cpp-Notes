#include<iostream>
using namespace std;

// The friend keyword in C++ is used to give a function or another class access 
// to the private and protected members of a class. By declaring a function or 
// a class as a friend, you allow it to bypass the usual access control rules 
// and access otherwise restricted data and methods.

// Uses of the friend Keyword:
// 1) Friend Function: 
// A function that is not a member of the class but has access to its private 
// and protected members.

// 2) Friend Class: 
// A class that can access the private and protected members of another class.

// 1. Friend Function
// A friend function is a standalone function that is given special access to 
// the private and protected members of a class. This function is declared 
// inside the class definition with the friend keyword but defined outside of 
// the class.

// Example:
class Box {
private:
    int length;

public:
    //constructor
    Box(int len){
        this->length = len;
    }

    // Friend function declaration
    friend void printLength(Box& b);
};

// Friend function definition
void printLength(Box& b) {
    // Accessing the private member length
    std::cout << "Length of the box: " << b.length << std::endl;
}
int main(){
    Box myBox(10);
    printLength(myBox); // Output: Length of the box: 10
    return 0;
}

// Explanation:
// The printLength() function is not a member of Box, but it is able to access 
// the private length member because it is declared as a friend.
// Declaring printLength() as a friend in Box allows it to bypass access 
// restrictions.