#include <bits/stdc++.h>
using namespace std;

#define endl '\n';
#define int long long
int gcdSum(int x) {
	int gcdSum;		
	int sum=0;
	int n = x;
	while(n>0){
		int temp=n%10;
		sum+=temp;
		n=n/10;
	}

	gcdSum = __gcd(x,sum);

	return gcdSum;
}

signed main() {
	int t;
	cin >> t;
	while(t--) {
		int x;
		cin >> x;
		int ans = gcdSum(x);
		while(ans == 1) {
			x++;
			ans = gcdSum(x);
		}

		cout << x << endl;
	}
	return 0;
}
