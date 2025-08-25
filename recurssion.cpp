#include <iostream>

using namespace std;

void revString(string s){
  if(s.length()==0){
    return;
  }
  string ros = s.substr(1);
  revString(ros);
  cout << s[0];
}

int main (){

  // revString("binod");

  return 0;


}