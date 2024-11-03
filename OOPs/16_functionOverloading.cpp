#include<iostream>
using namespace std;

class calsi{
    int x;
    int y;
    int z;

    public:
    //Constructor overloading
    calsi(){
        this->x=0;
        this->y=0;
        this->z=0;
        cout<<"Default constructor is called!"<<endl;
    }
    calsi(int x){
        this->x=x;
        this->y=0;
        this->z=0;
        cout<<"Constructor with one parameter is called!"<<endl;
    }
    calsi(int x, int y){
        this->x=x;
        this->y=y;
        this->z=0;
        cout<<"Constructor with two parameter is called!"<<endl;
    }
    calsi(int x, int y, int z){
        this->x=x;
        this->y=y;
        this->z=z;
        cout<<"Constructor with three parameter is called!"<<endl;
    }

    //Function overloading
    int add(){
        cout<<"Function with zero parameter is called!"<<endl;
        return 0;
    }
    int add(int a){
        cout<<"Function with one parameter is called!"<<endl;
        return a;
    }
    float add(int a, float b){
        cout<<"Function with two parameters is called!"<<endl;
        return float(a+b);
    }
    double add(int a, float b, double c){
        cout<<"Function with three parameters is called!"<<endl;
        return double(a+b+c);
    }
};
int main(){
    //constructor overloading example
    calsi c1; //default cosntructor will be called
    calsi c2(3); //cosntructor with one parameter will be called
    calsi c3(3,5); //cosntructor with two parameters will be called
    calsi c4(3,5,7); //cosntructor with three parameters will be called

    //function overloading example
    cout<<c1.add()<<endl;   //function with no parameter will be called
    cout<<c1.add(6)<<endl;   //function with one parameter will be called
    cout<<c1.add(4,5.7)<<endl;   //function with two parameters will be called
    cout<<c1.add(4,5.7, 6.7)<<endl;  //function with three parameters will be called
    return 0;
}