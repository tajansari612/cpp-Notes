#include<iostream>
using namespace std;

long long power(int p,int q){
    if(q==0) return 1;
    if(q&1==1){
        return p*power(p,q-1);
    }
    long long ans=power(p,q/2);
    return ans*ans;
    
}
int main(){
    int p=9;
    int q=3;
    long long pow=power(p,q);
    cout<<pow<<endl;
    return 0;
}