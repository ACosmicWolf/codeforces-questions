#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  vector<int> a;
  vector<int> b;
 
  for(int i = 0;i < n;i++) { 
    int x;
    cin >> x;
    a.push_back(x);
  }
  for(int i = 0;i < n;i++) { 
    int x;
    cin >> x;
    b.push_back(x);
  }
 
  sort(a.begin(),a.end());
  sort(b.begin(),b.end());
 
  
 
  if(a == b) {
    cout << "yes";
  }
  else {
    cout << "no";
  }
 
  return 0;
}
