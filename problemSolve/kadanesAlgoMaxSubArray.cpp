#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int main (){
  
  int n;
  int maxSum = INT_MIN, subSum = 0;
  
  cout << "Enter your array size : ";
  
  cin >> n;

  vector<int> arr;
  arr.resize(n);  

  cout << "Enter your array: ";

  for(int i = 0; i<n; i++){
    cin >> arr[i];
  }

  for(int i=0; i<n; i++){
    subSum += arr[i];
    maxSum = max(subSum, maxSum);
    if(subSum < 0){
      subSum = 0;
    }
  }

  cout << maxSum << endl;

  
  return 0;
}