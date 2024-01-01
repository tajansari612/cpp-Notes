#include<iostream>
using namespace std;

int main(){
    //break keyword

    int n=10;
    while(n>0){
        cout<<n<<" ";
        if(n==5){
            break;
        }
        n--;
    }


    //continue keyword

    n=10;
    while (n>0){
        n--;
        if(n==5){
            continue;
        }
        cout<<n<<" ";
        
    }
    
    return 0;
}