#include <bits/stdc++.h>
using namespace std;
unordered_map <long long, int> mp;
long long a[200005];
int main() {
    long long c  = 0, d = 0;
   int n; cin >> n;
   for(int i = 1;i<=n;i++){
    cin >> a[i];
    mp[a[i]]++;
   }
   sort(a + 1,a + n + 1);
   for(int i = 1;i<=n;i+= mp[a[i]]){
    if(mp[a[i]] > 1){
        long long e = mp[a[i]] - 2;
        long long ch = c;
        c = max(c, a[i]);
        d = max(d , ch);
        if(e >= 2){
            d = max(d, a[i]);
        }
    }
   }
   cout << c * d << endl;
    return 0;
}

