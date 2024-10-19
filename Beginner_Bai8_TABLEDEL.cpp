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

ll a[100005];
ll b[100005];

int main() {
 ios_base::sync_with_stdio(false);
 ll n, m ,k; cin >> n >> m >> k;
 FOR(i, k){
 ll x, y; cin >> x >> y;
 a[x]++;
 b[y]++;
 }

 ll ans  = 0;
 ll cnt_1 = 0, cnt_2 = 0;

 FOR(i, n){
 if(a[i] != 0){
    cnt_1++;
 }
 }

  FOR(i, m){
 if(b[i] != 0){
    cnt_2++;
 }
 }
 cout << (cnt_1 * cnt_2) *1LL << endl;

 return 0;
}
