#include <iostream>
#include <vector>

using namespace std;

int pickElement(vector<int> &arr){

  int start = 1;
  int end = arr.size()-2;

  while (start<=end)
  {
    int mid = start + (end-start)/2;
    if(arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1]){
      return mid;
    }else if(arr[mid-1] < arr[mid]){
        start = mid + 1;
    }else{
      end = mid-1;
    }
  }

  return -1;

  
}

int main(){
  int n;

  cout << "Enter mountain array size  : \n";

  cin >> n;

  vector<int> arr(n,0);

  cout << "Enter mountain array val : \n";


  // input type [1,2,3,5,7,9,6,3,1]

  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  double ans = pickElement(arr);

  cout << ans;

return 0;
}