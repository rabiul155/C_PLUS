#include <iostream>
#include <vector>

using namespace std;

int findMaxWater(vector<int>& height){

  int maxWater = 0, left = 0, right = height.size() - 1;

  while(left < right){
    int currentWater = min(height[left], height[right])*(right-left);
    maxWater = max(currentWater, maxWater);
    if(height[left]<height[right]){
      left++;
    }else{
      right--;
    }
  }

  return maxWater;
}

int main (){
  int n ; 

  cout << "Enter your container size : ";

  cin >> n;

  vector<int> height;
  height.resize(n);

  cout << "Enter container height array : ";

  for(int i=0; i<n; i++){
    cin >> height[i];
  }

 
  int ans = findMaxWater(height);

  cout << ans << endl;

}

