#include <iostream>
#include <vector>

using namespace std;


// calculate this without using division and time o(n) space o(1); 
vector<int> findProductOfArray(vector<int>& nums){

  vector<int> ans(nums.size(), 1);

  int prefix = 1;
  int suffix = 1;

  //ans with prefix store
  for(int i=1; i<ans.size(); i++){
    prefix = prefix*nums[i-1];
    ans[i] = prefix;
  }

  //ans with suffix store and final value
  for(int i=ans.size()-2; i>=0; i--){
    suffix = suffix*nums[i+1];
    ans[i] *= suffix;
  }

  return ans;
}

int main (){
  int n; 

  cout << "Enter your array size : \n";

  cin >> n;

  vector<int> nums(n,0);

  cout << "Enter the array : \n";

  for(int i = 0; i<n; i++){
    cin >> nums[i];
  }

 
  vector<int> ans = findProductOfArray(nums);

  for(int i=0; i < ans.size(); i++){
    cout << ans[i] << " ";
    
  }

}

