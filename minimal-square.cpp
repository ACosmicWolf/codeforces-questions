    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
      int t;
      cin >> t;
     
      for(int i = 0;i < t;i++) { 
        int l,b;
        cin >> l >> b;
     
        int ans;
        
        if(l > b) {
          if(b*2 < l) {
            ans = l*l;
          }
          else {
            ans = (b*2)*(b*2);
          }
        }
        else {
          if(l*2 < b) {
            ans = b*b;;
          }
          else {
            ans = (l*2)*(l*2);
          }
        }
     
        cout << ans << endl;
     
      }
     
      return 0;
    }
