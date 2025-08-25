#include <iostream>

using namespace std;

int main (){


  int n;
  
  cout << "Enter array size : ";
  cin >> n;


  int prices[n];

  cout << "Enter array value : "; 

  for(int i =0; i<n; i++){
    cin>> prices[i];
  }

  int maxProfit = 0, bestBuy = prices[0];

  for(int i = 1; i<n; i++){
      if(prices[i] < bestBuy){
      bestBuy =  prices[i];
      }
      maxProfit = max(maxProfit, prices[i]- bestBuy);

  }
  

  cout << "Max profit : " << maxProfit << endl;
  cout << "Best Buy : " << bestBuy << endl;



  return 0;
}