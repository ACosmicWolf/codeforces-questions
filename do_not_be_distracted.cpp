    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
      int n;
      cin >> n;
     
      for(int i = 0;i < n;i++) {
        int size;
        cin >> size;
        string str;
        cin >> str;
     
        vector<char> s;
        set<char> distinct_char;
     
        for(int i = 0;i < size;i++) { 
          s.push_back(str[i]);
          distinct_char.insert(str[i]);
        }
     
        vector<char> distinct(s.begin(),s.end());
        
     
        bool sus=false;
     
        for(int d = 0;d < distinct.size();d++) {
          if(sus==false){
            int first_pos,last_pos;
            for(int i = 0;i < size;i++) {
              if(s[i] == distinct[d])
                first_pos=i;
            }
            for(int j = size;j >= 0;j--) {
            if(s[j] == distinct[d])
              last_pos=j;
            }
     
            if(first_pos == last_pos) {
              sus = false;
            }else {
              for(int k = last_pos;k < first_pos;k++) { 
              if(distinct[d] != s[k]) {
                sus = true;
              }
            }
            }
     
            
     
          }
          else {
            break;
          }
        }
     
        if(sus == true) {
          cout << "NO" << endl;
        }
        else {
          cout << "YES" << endl;
        }
        
     
      
      }
     
      return 0;
    }
