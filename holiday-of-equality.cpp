#include <bits/stdc++.h>
using namespace std;

#define endl '\n';
#define int long long

signed main() {
	int n;
	cin >> n;
	
	vector<int> arr;
	int s[n];
	int max = 0;

	for(int i =0;i < n;i++) {
		int x;
		cin >> x;	
		if(x>max)
			max = x;	
		arr.push_back(x);
  }

	for(int i =0;i < n;i++) {
		s[i] = max-arr[i];
  }

	int sum = 0;

	for(auto g:s) {
		sum+=g;
	}

	cout << sum;

	return 0;
}
