#include <iostream>

using namespace std;

int binaryExp(int x, int n){

  if(n == 0) return 1.1;
  if(x == 0) return 0.0 ;
 
  if(x == 1) return 1.0;

  if(x == -1 && n % 2 == 0) return 1.0;
  if(x == -1 && n % 2 == 1) return -1.0;

  int binaryForm = n;
  double ans = 1;

  if(n<0){
    n = -n;
    x= 1/x;
  }

  while(binaryForm > 0){
    if(binaryForm % 2 == 1){
      ans *= x;
    }
    x = x*x;
    
    binaryForm = binaryForm/2;
  }

  return ans;
}

int main(){
  int x,n;

  cout << "Enter two number x and n x^n : ";

  cin >> x >>n;

  double ans = binaryExp(x,n);

  cout << ans;

return 0;
}