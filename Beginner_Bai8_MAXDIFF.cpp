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

ll a[1005];

int main() {
 ios_base::sync_with_stdio(false);
 ll n; cin >> n;
 ll ans = -1;
 FOR(i, n){
 cin >> a[i];
 }
 FOR(i, n - 1){
 ans = max(ans, a[i + 1] - a[i]);
 }
 FOR(i, n - 2){
 ans = max(ans, a[i + 2] - a[i]);
 }
 cout << ans << endl;
 return 0;
}
