#include <bits/stdc++.h>

using namespace std;

long long  num(long long  x, long long  y, long long  m){
long long  res = 1;
x = x % 10;
while(y > 0){
    if(y % 2 == 1){
        res = (res * x) % m;
        cout << res << endl;
    }
    y /= 2;
    x = x * x % m;
    cout << x << endl;
}
return res;
}

int main() {
	string a, b; cin >> a >> b;
	long long  x = stoll(a);
	long long  y = stoll(b);
	long long res = num(x,y,10);
	cout << res << endl;
	return 0;
}
