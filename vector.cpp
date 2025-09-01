#include <iostream>
#include <vector>

using namespace std;


int main (){
  vector<int> vec;

  vec.push_back(1);
  vec.push_back(2);
  vec.push_back(3);
  vec.push_back(4);
  vec.push_back(5);

  vec.pop_back();  // remove last element from vector 

  cout << vec.size() << endl; // it return how many value exist in vec
  cout << vec.capacity() << endl; // it return how many value can hold this vec;

  // access value of vector 
  vector<int> arr = {1,2,3,4,5,6};

  cout << "value at index 2" << arr[2] << "Or" << arr.at(2) << endl;
  cout << "Front " << arr.front() << endl;
  cout << "Back "  << arr.back() << endl;


  // vector initialize

  vector<int> arr2(10, 5) ; // vector initialize with size 10 and all value will be 5;
  vector<int> arr3(10) ; // vector initialize with size 10 and all value will be 0;


  // learn erase, insert, clear, empty

    vector<int> vec2 = {1,2,3,4,5,6};

    vec2.erase(vec2.begin());
    vec2.insert(vec.begin()+2, 50); // it add 50 at index 2;
    vec2.clear();


    int isEmpty = vec2.empty(); // if yes retrun 1 or 0

    cout << "Is empty " << isEmpty << endl;


  
   //................................................
   //................................................
   //................................................
   //................................................
   // deque and list most like vector type data structure
   //................................................
   //................................................
   //................................................
   //................................................


}