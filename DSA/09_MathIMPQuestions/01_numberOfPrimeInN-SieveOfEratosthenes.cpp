#include<iostream>
#include<vector>
using namespace std;

int countPrime(int n){
    int ctr=0;
    vector<bool> prime(n+1,true);
    prime[0]=prime[1]=false;
    for(int i=2;i<n;i++){
        if(prime[i]){
            ctr++;
            for(int j=2*i;j<n;j+=i){
                prime[j]=false;
            }
        }
    }
    return ctr;
}
int main(){
    int n;
    cout<<"Enter the value of N :";
    cin>>n;
    int primesNums = countPrime(n);
    cout<<primesNums<<endl;
    return 0;
}