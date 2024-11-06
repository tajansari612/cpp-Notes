#include <iostream>


// 2. Static Variables in Classes
// A static data member of a class is shared among all objects of that class. 
// Unlike normal instance variables, static members are not associated with any 
// particular instance and have class-level scope.

// Example:
class Example {
public:
    static int sharedValue;

    void display() {
        std::cout << "Shared Value: " << sharedValue << std::endl;
    }
};

// Define the static member outside the class
int Example::sharedValue = 0;

int main() {
    Example obj1, obj2;

    obj1.sharedValue = 10;
    obj1.display(); //Output: 10
    obj2.display(); // Output: Shared Value: 10

    obj2.sharedValue = 20;
    obj1.display(); // Output: Shared Value: 20
    obj2.display(); //Output: 20

    // Explanation: The sharedValue static variable is shared across all 
    // instances of Example, so changing it in one object affects all others.
    return 0;
}