#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve() {
	int n;

	cin >> n;
	vector<int> arr(2*n);

	for(auto &x : arr) cin >> x;

	map<int, int> mp;
	for(auto &x : arr){
		mp[x]++;
	} 

	int a = n;
	int ans = 0;

	while(a>0){
		for(auto &x : mp){
			
	}

	}

	for(auto &x : mp){
		if(x.second%2 == 0){
			ans = ans + 2;
			
		}else{
			ans++;
		}
	}

	cout << ans << endl;


    
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