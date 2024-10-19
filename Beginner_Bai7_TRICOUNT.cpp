#include <bits/stdc++.h>
using namespace std;

#define ll long long


long long a[8005];
int main() {
    ll n; cin >> n;
    for(int i = 1;i <=n;i++){
        cin >> a[i];
    }
    ll res = 0;
    sort(a + 1, a + n + 1);
    for(int i = 1; i<=n;i++){
        int p = i;
        for(int j = 1; j < i; j++){
            while(p < n && a[i] + a[j] > a[p + 1]){
                    p++;
            }
            res += p - i;
        }
    }
     cout << res << endl;
    return 0;
}
