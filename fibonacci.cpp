    #include <bits/stdc++.h>
     
    using namespace std;
     
    long long int fib(int f) {
    	int i=1;
    	long long a=0,b=1,c;
    	while(i < f) {
    		c=a+b;
    		a=b;
    		b=c;
    		i++;
    	}
     
    	return a;
    }
     
    int main() {
    	int n;
    	cin >> n;
     
    	cout << fib(n); 
     
     
    	return 0;
    }
