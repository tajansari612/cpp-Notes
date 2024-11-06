#include <iostream>
using namespace std;

// 2. Friend Class
// A friend class is a class that is allowed to access the private and protected 
// members of another class. This can be useful when two or more classes need 
// to work closely together.

// Example:

class Engine {
private:
    int horsepower;

public:
    //constructor
    Engine(int hp){
        this->horsepower = hp;
    }

    // Declare Car as a friend class
    friend class Car;
};

class Car {
public:
    void showEngineDetails(const Engine& e) {
        // Accessing the private member horsepower of Engine
        std::cout << "Engine horsepower: " << e.horsepower << std::endl;
    }
};

int main() {
    Engine myEngine(300);
    Car myCar;
    myCar.showEngineDetails(myEngine); // Output: Engine horsepower: 300
    return 0;
}

// Explanation:
// The Car class is declared as a friend of Engine, which allows Car to access 
// the private horsepower member of Engine.
// This is useful for tightly coupled classes that need to share private data.

// Key Points About the friend Keyword:
// 1. Friend functions and classes can break encapsulation, so they should be 
// used judiciously.
// 2. Friendship is not mutual: If class A declares class B as a friend, B can 
// access A's private members, but A cannot access B's private members unless B 
// also declares A as a friend.
// 3. Friendship is not inherited: Derived classes do not inherit the friend 
// status of their base class.
// 4. Friendship is granted, not taken: The class whose members are being 
// accessed must explicitly declare another class or function as its friend.