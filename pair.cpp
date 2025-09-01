#include<iostream>
#include<vector>
using namespace std;

int main(){


  pair <int, int> p = {1,2};

  cout << p.first << " " << p.second << endl;

  vector<pair<int , int>> num = {{1,2}, {3,4}};

  num.push_back({4,5});
  num.emplace_back(6,7);

  for(auto x : num){
    cout << x.first << " " << x.second << endl;
  }

}