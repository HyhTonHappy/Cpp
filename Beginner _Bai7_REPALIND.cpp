#include <bits/stdc++.h>
using namespace std;

#define ii int
#define ll long long
#define mod 1000000007
//#define FOR(i, n) for(int i = 1; i <= (n); i++)
#define FOR(i, n) for(int i = 0; i < s.size(); i++)



int main() {
  ii t; cin >> t;
  while(t--){
    string s; cin >> s;
    ll k; cin >> k;
    ll p = s.size() - 1;
    bool flag = true;
    FOR(i, (int) s.size()){
    if(s[i] != s[p]){
        flag = false;
        break;
    }
    p--;
    }
    if(flag == true){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
  }
}
