#include<iostream>
#include<vector>
using namespace std;

// Vectors are the dynamic arrays
// header file <vector> should be created to use vectors

// Declaration
// vector<data_type(int,float,char)> name_of_vector;
// vector<data_type(int,float,char)> name_of_vector(size);

// size vs capacity
// size gives us total number of elements stored in a vector
// capacity gives us the total capacity of a vector

void disp(vector<int> vec1){
    int n = vec1.size();
    for(int i=0;i<n;i++){
        cout<<vec1[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> vec1;

    //Basic operations

    //01 push_back(element)  //Add element at last position
    vec1.push_back(12);
    vec1.push_back(13);
    vec1.push_back(14);
    vec1.push_back(15);
    vec1.push_back(16);
    disp(vec1);

    //02 pop_back()  //Removes an element from last position
    vec1.pop_back();
    vec1.pop_back();
    disp(vec1);

    //03 name_of_vector.size()  //returns the size of the vector
    int size = vec1.size();
    cout<<size<<endl;

    //04 name_of_vector.resize()  //changes the size the of the vector
    vec1.resize(10);
    cout<<vec1.size()<<endl;

    //05 name_of_vector.capacity()  //returns the capacity of the vector
    cout<<vec1.capacity()<<endl;
    vec1.push_back(34);            // adding the extra element in the vector which is full increase the 
    cout<<vec1.size()<<endl;       // size by 1 and increase the capacity to double
    cout<<vec1.capacity()<<endl;

    //06 name_of_vector.begin()   // gives address of the first element
    cout<<*vec1.begin()<<" ";
    cout<<*(vec1.begin()+2)<<" ";
    cout<<*(vec1.begin()+7)<<endl;

    //07 name_of_vector.end()  //gives the end address of the vector
    cout<<*vec1.end()<<" ";         //gives garbage due to size is 11
    cout<<*(vec1.end()-1)<<" ";   //gives the last value at 10th position
    cout<<*(vec1.end()-9)<<endl;  //gives the 9th element from last position
    cout<<vec1.size()<<" "<<vec1.capacity()<<endl;

    //08 name_of_vector.insert(postion,element)   //insert at given position
    disp(vec1);
    vec1.insert(vec1.begin()+6,99);
    disp(vec1);

    //09 name_of_vector.erase(postion)    //erase the element and shifts left by one position
    vec1.erase(vec1.begin()+2);
    cout<<*(vec1.begin()+2)<<endl;
    disp(vec1);
    cout<<vec1.size()<<" "<<vec1.capacity()<<endl;  // no chnages in size and capacity

    //10 name_of_vector.clear()
    vec1.clear();           // erase all the elements and the make the vector empty
    disp(vec1);
    cout<<"Vector is empty"<<endl;
    cout<<vec1.size()<<" "<<vec1.capacity()<<endl;
    return 0;
}