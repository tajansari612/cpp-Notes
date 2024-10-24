#include<iostream>
using namespace std;

// public - members are accessible from outside the class.

// private - members cannot be accessed (or viewed) from outside the class.

// protected - members cannot be accessed from outside the class, however, 
// they can be accessed in inherited classes.
class parent{
    public:
    int x;

    protected:
    int y;

    private:
    int z;
    
};

class child1 : public parent{
    // x will remain public
    // y will remain protected
    // z will not be accessible
};

class child2 : protected parent{
    // x will becomes protected
    // y will remain protected
    // z will not be accessible
};

class child3 : private parent{
    // x will become private
    // y will become private
    // z will not be accessible
};
int main(){
    return 0;
}