#include<iostream>
using namespace std;

void swap1(int* a,int* b){
    *b=*a ^ *b;
    *a=*a ^ *b;
    *b=*a ^ *b;
}
void swap2(int* a,int* b){
    *b=*a + *b;
    *a=*b - *a;
    *b=*b - *a;
}
int main(){
    int a=10;
    int b=20;
    swap2(&a,&b);
    cout<<a<<" "<<b<<endl;
    return 0;
}