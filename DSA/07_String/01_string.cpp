#include<iostream>
#include<typeinfo>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string str="taj";
    cout<<str<<" "<<typeid(str).name()<<endl;
    
    // string str2;
    // cout<<"Enter the string :";
    // cin>>str2;   //takes input untill a space,tab,line is present
    // cout<<str2<<endl;

    // string str3;
    // cout<<"Enter the string :";
    // getline(cin,str3);   //takes input until new line
    // cout<<str3<<endl;

    //IMPORTANT Points
    //01 Indexing in string
    string s="Taj mohammad ansari";
    int n=s.size();
    for(int i=0;i<n;i++){
        cout<<s[i]<<" ";
    }cout<<endl;
    cout<<n<<endl;      //at nth position '\0' called as null value is present


    //02 string vs char array
    //01 string is a class where variables |01 array of char data type
    // are object of the string class      |
    //                                     |
    //02 string str_name;                  |02 char arr_name[size];
    //                                     |
    //03 Dyanamic memory allocation        |03 static memory allocation
    //                                     |
    //04 slower                            |04 faster
    //                                     |
    //05 have inbuilt functions

    
    //Important functions
    //01 reverse(start_ptr,end_ptr);
    string s1="Taj mohammad ansari";
    cout<<s1<<endl;
    reverse(s1.begin(),s1.end());
    cout<<s1<<endl;

    //02 str_name.substr();
    string s2="Taj mohammad ansari";
    string s3=s2.substr(3,8);
    cout<<s3<<endl;

    //03 string concatenate (+ operator)
    string s4 = "Hello";
    string s5 = ", Sir";
    cout<<s4+s5<<endl;

    char c1[] = "Taj";
    char c2[] = " Ansari";
    // string c3 = strcat(c1,c2);
    strcat(c1,c2);   //copies c1,c2 to c1
    cout<<c1<<endl;

    //04 str_name.push_back(ele);
    string s6 = "Taj ";
    s6.push_back('a');
    s6.push_back('n');
    s6.push_back('s');
    cout<<s6<<endl;

    //05 str_name.pop_back(ele);
    s6.pop_back();
    s6.pop_back();
    s6.pop_back();
    cout<<s6<<endl;
    
    //07 str_name.size()  //gives the length of the string
    cout<<s6.size()<<endl;
    //str.len()  //O(N)
    //str.size()  //O(1)
    return 0;
}