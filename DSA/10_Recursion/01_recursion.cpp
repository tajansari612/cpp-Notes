#include<iostream>
using namespace std;

//Recursion is the technique of making a function call itself. This technique
// provides a way to break complicated problems down into simple problems which
// are easier to solve.

//Example
int sum(int k) {
  if(k==0){
    return 0;
  }

  return k+sum(k-1);
}

int main() {
  int result = sum(10);
  cout << result;
  return 0;
}