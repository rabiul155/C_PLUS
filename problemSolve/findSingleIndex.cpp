#include <iostream>
#include <vector>

using namespace std;

int findSingleIndex(vector<int> &arr){

  int start = 0;
  int end = arr.size()-1;

  while (start<=end)
  {
    int mid = start + (end-start)/2;
    if(arr[mid-1] != arr[mid] && arr[mid] != arr[mid+1]){
      return arr[mid];

    }else if(arr[mid-1] == arr[mid]){
      if((mid-1-start)%2 == 0){
        start = mid + 1;
      }else{
        end = mid - 2;
      }
       
        
    }else{
      if((end-mid+1)%2 == 0){
        end = mid - 1;
      }else{
       start = mid + 2;
      }
     
    }
  }

  return -1;

  
}

int main(){
  int n;

  cout << "Enter array size  : \n";

  cin >> n;

  vector<int> arr(n,0);

  cout << "Enter find single index val array val : \n";

  // input type [1,1,2,2,3,4,4,5,5]

  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  double ans = findSingleIndex(arr);

  cout << ans;

return 0;
}