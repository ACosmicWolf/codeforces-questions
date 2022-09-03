    #include <bits/stdc++.h>
    using namespace std;
     
     
    int main() {
    	string a,b,c="";
    	cin >> a >> b;
     
    	for(int i = 0;i < a.length();i++) {
    		if(a[i] != b[i]) {
    			if(a[i] == '1' || b[i] == '1') {
    				c+='1';
    			}
    			else {
    				c+='0';
    			}
    		}
    		else {
    			c+='0';
    		}
    	}
     
    	cout << c;
     
    	return 0;
    }
