
#include <bits/stdc++.h>
  using namespace std;

  int main() {
  string s;
  cin >> s;

  string h = "hello";

  int n=0;

  for(int i = 0;i < s.size();i++) {
    if(s[i]==h[n]) {
      n++;
    }
  }

  n < 5 ? cout << "NO" : cout << "YES";



  return 0;
}
