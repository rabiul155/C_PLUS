#include <iostream>
#include <vector>

using namespace std;

int findUnique(vector<int>& arr){
  int unique = 0;

  for(int val : arr){
    unique = unique^val;
  }

  return unique;
}

int main (){
  vector<int> arr={4,1,2,2,1};

  cout << findUnique(arr) << endl;


}