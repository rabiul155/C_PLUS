#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll maxSubArray(vector<ll>& arr) {
    ll currentSum = 0;
    ll maxSum = 0;

    for(int i = 0; i<arr.size(); i++) {
        currentSum += arr[i];

        if (currentSum > maxSum){
            maxSum = currentSum;

        }

        if (currentSum < 0){
            currentSum = 0;
        }

    }
    return maxSum;
}


void solve() {
	ll n, k;
  cin >> n >> k;
  vector<ll> a(n);
  vector<ll> b(n);

  ll mxA = INT_MIN;

  for(auto &x : a){
    cin >> x;
    if(x > mxA){
      mxA = x;
    }
  } 
  pair<ll, ll> mxB = {-1, INT_MIN};
  for(int i = 0; i<n; i++){
    cin >> b[i];
    if(b[i]> mxB.second){
      mxB.first = i;
      mxB.second = b[i];
    }
  } 

  if(mxA <= 0){

    if(k%2 == 0){
      cout << mxA << endl;
    }else{
      ll mx = INT_MIN;
      for(int i = 0; i<n; i++){
        ll sum = a[i] + b[i];
        if(sum>mx){
          mx = sum;
        }
      }
      cout << mx << endl;
    }
    return;
  }

  if(k%2 == 1){
    a[mxB.first] += mxB.second;
  }

  ll maxSum = maxSubArray(a);

  cout << maxSum << endl;


}

int main() {
	// author : siyam
	ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
	ll t; cin >> t;
	while(t--){
	  solve();
	}
	return 0;
}
// g++ code.cpp && ./a.exe