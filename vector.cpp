#include <iostream>
#include <vector>

using namespace std;


int main (){
  vector<int> vec;

  vec.push_back(1);
  vec.push_back(2);
  vec.push_back(3);

  cout << vec.size() << endl; // it return how many value exist in vec

  cout << vec.capacity(); // it return how many value can hold this vec;


}