#include<iostream>
using namespace std;
int add(int a=0,int b=0,int c=0,int d=0){
    int ans = a+b+c+d;
    return ans;
}
int main(){
    cout<<add(9,7)<<endl;
    cout<<add(6)<<endl;
    cout<<add(6,7,8)<<endl;
    cout<<add(6,7,8,9)<<endl;
    cout<<add()<<endl;
    return 0;
}