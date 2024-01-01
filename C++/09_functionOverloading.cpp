#include<iostream>
using namespace std;

int add(int a,int b){
    return a+b;
}
int add(int a,int b,int c){
    return a+b+c;
}
float add(float a,float b){
    float ans = a + b;
    return ans;
}
string add(string a,string b){
    string ans = a + " " + b;
    return ans;
}
int main(){
    cout<<add(5,6)<<endl;
    cout<<add(5,6,8)<<endl;
    // cout<<add(5.6,8.6)<<endl;        //ambigous error
    cout<<add(float(5.6),float(7.8))<<endl;
    cout<<add("taj","ansari")<<endl;
    return 0;
}