    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
      long long n,k;
      cin >> n >> k;
     
      long long o=0;
     
      long long ans = 0;
     
      if(n%2==0){
        //even
        o=n/2;
      }
      else {
        o=(n+1)/2;
      }
     
      if(k > o) {
        // k is even
        // find k even number
        ans=(k-o)*2;
      }
      else {
        ans = (k*2)-1;
      }
     
      cout << ans;
     
      return 0;
    }
