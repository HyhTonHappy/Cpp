#include <bits/stdc++.h>

using namespace std;
int a[200005];
int main() {
	string s; cin >> s;
	s = "#" + s;
	int n = s.size();
	int t; cin >> t;
	while(t--){
       int x; cin >> x;
    // abcdefgh 2 1 3 -> 9 7
    a[x]++;
    a[ n - x + 2]--;
	}
	for(int i = 1;i<=n;i++){
        a[i] += a[i - 1];
	}
	for(int i = 1; i<= n / 2;i++){
        if(a[i] & 1) {
            swap(s[i] , s[n - i]);
        }
	}
	cout << s.erase(0,1) << endl;
	return 0;
}
