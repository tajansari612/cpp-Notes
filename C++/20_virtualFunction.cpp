#include<iostream>
using namespace std;

class animal{
    public:
    void disp(){       //decided at compile time
        cout<<"Hu hu hu!"<<endl;
    }
    virtual void disp2(){  //due to virtual keyword decided at run time
        cout<<"Hu hu hu!"<<endl;
    }
};
class dog : public animal{
    public:
    void disp(){
        cout<<"Bhau bhau bhau!"<<endl;
    }

    void disp2(){
        cout<<"Bhau bhau bhau!"<<endl;
    }
};
int main(){
    animal *p;    //decided at compile time
    p=new dog();  //decided at run time
    p->disp();  // hence output is Hu hu hu!

    animal* q=new dog(); 
    p->disp2();    //hence output is Bhau bhau bhau! due to virtual keyword
    return 0;
}