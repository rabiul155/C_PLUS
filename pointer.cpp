#include <bits/stdc++.h>
using namespace std;

int changePassByVal(int a) {

  a = 20;

}
int changePassByRef(int* ptr) {

  *ptr = 20;

}

int changePassByRefWithAlias(int &b) {

  b = 40;

}

int main(){
  int n = 10;

  int* ptr = &n;

  int** ptr2 = &ptr;

  // cout << "Memory address of the variable n is : "<< &n << endl;
  // cout << "Pointer value 1 : "<< ptr << endl;
  // cout << "Pointer value 2 : "<< ptr2 << endl;

  // Dereference operator *()
  // it takes address and return the value stored in this address

  // cout << "Dereference " << *(ptr) << endl;

  // null pointer
  int* nullPointer = NULL;

  int a = 10;

  changePassByVal(a);

  cout << "pass by value does not change the value : " << a << endl;

  changePassByRef(&a);

  cout << "pass by ref change the value of a : " << a << endl;

  changePassByRefWithAlias(a);

  cout << "pass by ref with alias change the value of a : " << a << endl;

  return 0;
}