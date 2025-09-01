#include<iostream>
#include<set>

using namespace std;

int main(){

  set<int> s; // set store unique value;

  s.insert(1);
  s.insert(2);
  s.insert(3);
  s.insert(4);
  s.insert(5);

  s.insert(1);
  s.insert(2);
  s.insert(3);

  cout << s.size() << endl;

  for(int x : s){
    cout << x << " ";
  }
  cout << endl;


    //......................................................
  //......................................................
  //......................................................
  //......................................................
  // unordered_set just like set but the value does not stored in sorted order 
  //......................................................
  //......................................................
  //......................................................

  return 0;
}