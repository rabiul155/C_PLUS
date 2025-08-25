#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> arr, int target){
  int start = 0;
  int end = arr.size()-1;

  while (start<=end){

    // int mid = (start+end)/2; for int max value the (start+end) will be overflow 
    int mid = start + (end-start)/2; 

    if(arr[mid]>target){
      end = mid - 1;
    }
    else if(arr[mid]<target){
      start = mid + 1;
    }
    else{
      return mid;
    }
  }

  return -1;

}

int binarySearchWithRecursion (vector<int> arr, int target, int start, int end){

  if(start>end){
    return -1;
  }
 // int mid = (start+end)/2; for int max value the (start+end) will be overflow 
  int mid = start + (end-start)/2;

  if(arr[mid]>target){
    end = mid - 1;
   return binarySearchWithRecursion(arr, target, start, end);
  }
  else if(arr[mid]<target){
    start = mid + 1;
   return binarySearchWithRecursion(arr, target, start, end);
  }
  else{
    return mid;
  }

}

int main (){

  vector<int> arr = {1,2,3,4,5,6,7,8,9};
  vector<int> arr2 = {11,12,13,14,15,16,17,18,19};

  cout << binarySearch(arr, 8) << endl;
  cout << binarySearch(arr2, 15) << endl;

 
  
  cout << binarySearchWithRecursion(arr, 8, 0, arr.size()-1) << endl;

  cout << binarySearchWithRecursion(arr2, 15 ,0, arr2.size()-1) << endl;

    
  return 0;
}