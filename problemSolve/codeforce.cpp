#include<iostream>
#include<string>

using namespace std;

void printPoint (int x1, int x2, int n){
    for(int i=1; i<=n/2; i++){
      cout << x1+i << " " << x2+i << endl;
      cout << x1-i << " " << x2-i << endl;
    }
}



int main() {
  int t; cin>>t;
  while(t--){

    int x1,x2,n;
    cin >> x1 >> x2 >>n;

    if(n%2 == 0){
      printPoint(x1,x2,n);
    }else{
      cout << x1 << " " << x2 << endl;
      printPoint(x1,x2,n);
    }


  }

  return 0;
}