#include<iostream>
using namespace std;

void disp(int arr[],int n){
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void disp(char arr[],int n){
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    //Some Important!!! Array methods

    //01 fill_n(name_of_array,size_upto_which_array_initialize,element)
    //Iniatializing array with a choosen value
    int arr[18];
    fill_n(arr,16,-5);
    disp(arr,18);

    char arr2[13];
    fill_n(arr2,5,'f');
    disp(arr2,13);

    //02 fill(name_of_array,name_of_array+size_upto_which_value_to_set,value_or_element);
    int arr3[12];
    fill(arr3,arr3+8,5);
    disp(arr3,12);

    return 0;
}