#include <iostream>

// In C++, the static keyword can be used with variables and functions, 
// both inside and outside of classes. It has different meanings depending on 
// the context in which it is used. 
// Here are the main uses of the static keyword in C++:

// 1. Static Variables in Functions
// A static variable inside a function retains its value between function calls. 
// Unlike local variables, which are created and destroyed each time a function 
// is called, static variables are initialized only once and persist for the 
// lifetime of the program.

// Example:
void counter() {
    static int count = 0; // This variable will retain its value between calls
    count++;
    std::cout << "Count: " << count << std::endl;
}

int main() {
    //static variable inside the function
    counter(); // Output: Count: 1
    counter(); // Output: Count: 2
    counter(); // Output: Count: 3
    // Explanation: The count variable is initialized only once and keeps its 
    // value even after the function exits.

    
}