#include<iostream>
#include<map>

using namespace std;

int main(){

  map<string, int> m;

  m["tv"] = 100;
  m["laptop"] = 20;
  m["mobile"] = 500;

  m.insert({"book", 500});
  m.erase("tv"); // remove tv from the map

  for(auto x : m){
    cout << x.first << " " << x.second << endl;

  }

  if(m.find("laptop") !=m.end()){
    cout << "laptop found\n";
  }else{
    cout << "laptop not found\n";
  }

  cout << "total mobile" << " " << m["mobile"] << endl;


  //......................................................
  //......................................................
  //......................................................
  //......................................................
  // unordered_map just like map but the key does not sorted 
  //......................................................
  //......................................................
  //......................................................




  return 0;
}