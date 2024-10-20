#include <bits/stdc++.h>
using namespace std;

#define ii int
#define ll long long
#define mod 1000000007
#define FOR(i, n) for(int i = 1; i <= (n); i++)
//#define FOR(i, n) for(int i = 0; i < s.size(); i++)
#define PI 3.14159265358979323846
#define INF INT_MAX
#define MINF INT_MIN
ll a[2005];


int main() {
 ios_base::sync_with_stdio(false);
 ll n, k; cin >> n >> k;
 FOR(i, n){
 cin >> a[i];
 }
 ll ans = 0;
sort(a + 1, a + n + 1);
for(int i = n; i>=1; i-=k){
    ans += (a[i] - 1) * 2;
}
cout << ans;
 return 0;
}
