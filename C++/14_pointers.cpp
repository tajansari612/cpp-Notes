#include<iostream>
using namespace std;

int main(){
    int a=10;
    cout<<&a<<endl;   //Address-of (&) operator use to extract address

    //Pointers can store addresses
    //data_type *pointer_name;
    int *p=&a;
    cout<<p<<" "<<*p<<endl;     //Dereference (*) operator use to extract the value store on that address

    *p=12;
    cout<<*p<<" "<<a<<endl;   //The value is changed in *p as well as in a


    //Pointer Arithmetic
    a=10;
    int* ptr=&a;
    cout<<ptr+1<<" "<<ptr+2<<" "<<ptr+3<<endl;

    double b=10;
    double* ptrd=&b;
    cout<<ptrd+1<<" "<<ptrd+2<<" "<<ptrd+3<<" "<<ptrd-1<<endl;


    //Array as pointers
    int arr[]={1,2,3,4,5,6,7};
    int *ptr2=arr;
    for(int i=0;i<7;i++){
        cout<<i<<" "<<*(ptr2+i)<<endl;
    }
    cout<<ptr2<<" "<<arr<<" "<<*ptr2<<" "<<*arr<<endl;

    //Types of pointer
    //01 Wild pointer
    // A wild pointer in C is a pointer variable that has not been assigned 
    // a valid memory address, or that has been assigned an invalid memory 
    // address. Using a wild pointer can cause unpredictable and potentially 
    // dangerous behavior, such as accessing or modifying unintended memory 
    // locations, leading to data corruption or program crashes.
    int *ptr3;
    cout<<ptr3<<" "<<*ptr3<<endl;

    //02 NULL Pointer
    // It is always a good practice to assign the pointer NULL to a pointer 
    // variable in case you do not have exact address to be assigned. This is 
    // done at the time of variable declaration. A pointer that is assigned 
    // NULL is called a null pointer.
    int *ptr4=NULL;
    cout<<ptr4<<endl;
    //cout<<*ptr4<<endl;   //if it is uncommented, code below this not executed

    //03 Dangling Pointer
    // A pointer pointing to a memory location that has been deleted (or freed)
    // is called a dangling pointer. Such a situation can lead to unexpected 
    // behavior in the program and also serve as a source of bugs in C programs.
    int *ptr5;
    {
        int x=10;
        ptr5=&x;
        cout<<ptr5<<" "<<*ptr5<<endl;
    }
    cout<<ptr5<<" "<<*ptr5<<endl;

    //04 Void Pointer
    // Void pointer is a specific pointer type – void * – a pointer that points 
    // to some data location in storage, which doesn’t have any specific type.
    // Void refers to the type. Basically, the type of data that it points to
    // can be any. Any pointer type is convertible to a void pointer hence it
    // can point to any value. 
    // Note: Void pointers cannot be dereferenced. It can however be done using
    // typecasting the void pointer. Pointer arithmetic is not possible on
    // pointers of void due to lack of concrete value and thus size.
    int x=10;
    float y=11.11;
    void *ptr6=&x;
    cout<<ptr6<<" ";
    ptr6=&y;
    cout<<ptr6<<endl;

    //05 Double Pointer
    {
        int a=10;
        int *p=&a;
        int **q=&p;
        cout<<a<<" "<<*p<<" "<<**q<<endl;
    }

    //cout<<*ptr6<<endl;  //error cannot be dereferenced directly typecasting is needed
    cout<<*((float*)ptr6)<<" ";
    ptr6=&x;
    cout<<*((int*)ptr6)<<endl;


    //IMP Note
    //01
    // int *ptr7=0;
    // a=10;
    // *ptr7=a;
    // cout<<*ptr7<<endl;  //if it is uncommented, code below this not executed
    cout<<"true"<<endl;

    //02
    {
        char b[] = "xyz";
        char *c = &b[0];
        cout << c << endl;
    }

    //03
    {
        int arr[]={1,2,3,4,5};
        int *ptr1=&arr[0];
        int *ptr2=ptr1+3;
        cout<<ptr2-ptr1<<endl;
    }
    return 0;
}