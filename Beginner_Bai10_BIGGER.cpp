#include <bits/stdc++.h>
using namespace std;

#define ii int
#define ll long long
#define mod 1000000007
//#define FOR(i, n) for(int i = 1; i <= (n); i++)
#define FOR(i, n) for(int i = 0; i < s.size(); i++)
#define PI 3.14159265358979323846
#define INF INT_MAX
#define MINF INT_MIN



int main() {
 ios_base::sync_with_stdio(false);
 ll a, b; cin >> a >> b;
 ll cnt = 0;
 while(b >= a){
    b *= 2;
    a *= 3;
    cnt++;
 }
cout << cnt;
 return 0;
}
