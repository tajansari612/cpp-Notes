#include<iostream>
using namespace std;

void firstAndLastIndex(string &s,char c,int* fp,int* lp){
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]==c){
            *fp=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(s[i]==c){
            *lp=i;
            break;
        }
    }
}
int main(){
    string s="aaaabcjdklankn";
    //find first and last index of a
    int fi=-1;
    int li=-1;
    int* fp=&fi;
    int* lp=&li;
    firstAndLastIndex(s,'a',fp,lp);
    cout<<fi<<" "<<li<<endl;
    return 0;
}