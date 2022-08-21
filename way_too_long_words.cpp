    #include<bits/stdc++.h>
    using namespace std;
     
    int main() {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;
     
     
     
            if(s.length() <= 10) {
                cout << s << endl;
            }
            else {
                string temp = s;
                temp.erase(0,1);
                temp.resize(temp.size() - 1);
                cout << s[0] + to_string(temp.size()) + s[s.size()-1] << endl;   
            }
        }
     
        return 0;
    }
