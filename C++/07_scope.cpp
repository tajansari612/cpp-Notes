#include<iostream>
using namespace std;
// where the variable is accessible is the scope of the variable
// Variables in the same scope cannot have the same name


// variables

//01 Local variables
//These are the variables that are declared inside function or block

//02 Globale variables
//These are the variables that exits throughout the whole program and can be used in any part of the program


//Local variable takes precedence over global variable

// if local variable is present as same name as glaobla variable then global variable can be accessed using scope resolution operator
int var = 100;   //global variable global scope
int main(){
    int var = 123;          //Loacal variable local scope
    cout<<var<<endl;        //output should be 123
    cout<<::var<<endl;     // output should be 100

    int a = 15;
    if(true){
        int a =54;
        if(true){
            int a = 90;
            if(true){
                int a = 102;
                cout<<a<<endl;
            }
            cout<<a<<endl;
        }
        cout<<a<<endl;
    }
    cout<<a<<endl;
    cout<<endl;


    int b =12;
    if(true){
        if(true){
            int b =56;
            if(true){
                if(true){
                    int b = 98;
                    cout<<b<<endl;
                }
                cout<<b<<endl;
            }
            cout<<b<<endl;
        }
        cout<<b<<endl;
    }
    cout<<b<<endl;
    cout<<endl;

    
    return 0;
}