#include <bits/stdc++.h>
using namespace std;


// What is pointer
// Pointer is a special variable which store address of others variable 

int changePassByVal(int a) {

  a = 20;

}

int changePassByRef(int* ptr) {

  *ptr = 20; // dereference

}

int changePassByRefWithAlias(int &b) { //pass by ref using alias

  b = 40;

}

int main(){
  int n = 10;

  int* ptr = &n;

  int** ptr2 = &ptr;


// variable data type and pointer data type will be the same 
  float val = 12.34;
  float* ptrFloat = &val;



  // cout << "Memory address of the variable n is : "<< &n << endl;
  // cout << "Pointer value 1 : "<< ptr << endl;
  // cout << "Pointer value 2 : "<< ptr2 << endl;

  // Dereference operator *() or * both are same. ex *(ptr) or *ptr
  // it takes address and return the value stored in this address

  // cout << "Dereference " << *(ptr) << endl;
  // cout << "Dereference " << *ptr << endl;

  // null pointer
  int* nullPointer = NULL;

  int a = 10;

  changePassByVal(a);

  cout << "pass by value does not change the value : " << a << endl;

  changePassByRef(&a);

  cout << "pass by ref change the value of a : " << a << endl;

  changePassByRefWithAlias(a);

  cout << "pass by ref with alias change the value of a : " << a << endl;


  // array pointer 

  int arr[5] = {1,2,3,4,5};


  cout << "address of first value of array => " << arr << endl; // arr store the address of fist value;

  cout << "first value of array using pointer => " << *arr << endl;


  // increment and decrement in pointer 

  int inc = 100;

  int* incPrt = &inc;

  cout << "Address of inc > " << incPrt << endl;

  incPrt++;
  // this operation add 4 byte to the pointer because int type has 4 byte data

  cout << "Address after change => " << incPrt << endl;

  return 0;
}