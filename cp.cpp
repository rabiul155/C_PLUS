#include <bits/stdc++.h>
#define ll long long
using namespace std;

tuple<ll , ll , ll> maxSubArray(vector<ll>& arr) {
    ll currentSum = 0;
    ll maxSum = 0;
    int l = 0;
    int r = 0;
    int index = 0;

    for(int i = 0; i<arr.size(); i++) {
        currentSum += arr[i];

        if (currentSum > maxSum){
            maxSum = currentSum;
            l = index;
            r = i;

        }

        if (currentSum < 0){
            currentSum = 0;
            index = i+1;
        }

    }
    return {l,r, maxSum};
}


void solve() {
	ll n, k;
  cin >> n >> k;
  vector<ll> a(n);
  vector<ll> b(n);

  for(auto &x : a){
    cin >> x;
  } 

  for(auto &x : b){
    cin >> x;
  } 

  ll m = INT_MIN;

  for(auto x : a){
    if(x > m){
      m = x;
    }
  }

  if(m <= 0){
    cout << m << endl;
    return;
  }

  ll l;
  ll r;
  ll maxSum;

  tie(l , r, maxSum) = maxSubArray(a);

  ll mx = 0;

  for(int i = l; i<= r; i++){
    if(b[i]>mx){
      mx = b[i];
    }
  }

  if(k%2 == 1){
    maxSum+= mx;
  }

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