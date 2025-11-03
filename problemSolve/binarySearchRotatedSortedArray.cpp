#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> nums, int target){
  int start = 0;
  int end = nums.size()-1;

  while (start<=end){

    // int mid = (start+end)/2; for int max value the (start+end) will be overflow 
    int mid = start + (end-start)/2; 

    if(nums[mid]==target){
      return mid;
    }

    else{
      if(nums[start]<=nums[mid]){
        // first half sorted 
        if(target >= nums[start] &&  target <= nums[mid] ){
          end = mid - 1;
        }else{
          start = mid + 1;
        }

      }

     else {
        // first half sorted 
        if(target >= nums[mid] &&  target <= nums[end] ){
          start = mid + 1;
        }else{
          end = mid - 1;
        }

      }
      
    }
    
  }

  return -1;

}

int main (){

  vector<int> nums = {4,5,6,7,0,1,2};
 
  cout << binarySearch(nums, 0) << endl;

  return 0;
}