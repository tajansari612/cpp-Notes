#include<iostream>
using namespace std;

string stringCompression(string s){
    int n=s.size();
    int fre=0;
    int c=s[0];
    int ans=0;
    int j=0;
    for(int i=0;i<n;i++){
        if(s[i]==c){
            fre++;
        }else{
            if(fre>1){
                s[j++]=c;
                string t=to_string(fre);
                int m=t.size();
                int k=0;
                while(k<m){
                    s[j++]=t[k++];
                }
                ans+=m;
            }else{
                s[j++]=c;
                ans++;
            }
            fre=1;
            c=s[i];
        }
    }
    if(fre>1){
        s[j++]=c;
        string t=to_string(fre);
        int m=t.size();
        int k=0;
        while(k<m){
            s[j++]=t[k++];
        }
        ans+=m;
    }else{
        s[j++]=c;
        ans++;
    }
    return s;
}
int main(){
    string s1;
    cout<<"Enter the string :";
    cin>>s1;
    s1=stringCompression(s1);
    cout<<s1<<endl;
    return 0;
}