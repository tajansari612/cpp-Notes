#include<iostream>
using namespace std;

int main(){
    //Contditionals

    //01 if
    if(5>4){
        cout<<"Yes"<<endl;
    }

    //02 if-else
    if(5<4){
        cout<<"No"<<endl;
    }else{
        cout<<"Yes"<<endl;
    }

    //03 if-else if-else
    if(5<4){
        cout<<"No"<<endl;
    }else if(6<9){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }



    //Loops

    //01 while loop
    int n=10;
    int i=1;
    while(i<=n){
        cout<<i<<" ";
        i++;
    }
    cout<<endl;

    
    //02 for loop
    for(int i=0;i<n;i++){
        cout<<i+1<<" ";
    }

    //03 do while loop

    n = 10;
    do
    {
        cout<<n<<" ";
        n--;
    } while (n>0);
    

cout<<endl;

    //switch case

    int course = 2;
    switch (course)
    {
    case 1:
        cout<<"Javascript"<<endl;
        break;
    case 2:
        cout<<"python"<<endl;
        break;
    case 3:
        cout<<"CPP"<<endl;
        break;
    default:
    cout<<"Web Dev"<<endl;
        break;
    }

    //Ext
    for(int i=0,j=10;i!=j;i++,j--){
        cout<<i<<" "<<j<<endl;
    }
    return 0;
}