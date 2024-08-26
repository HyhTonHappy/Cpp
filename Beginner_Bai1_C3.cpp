#include <bits/stdc++.h>

using namespace std;
int main()
{
    unordered_map <long long, long long> mp;
    long long n, k; cin >> n >> k;
    long long cnt = 0;
    for(long long i = 1;i<=n;i++){
        long long x; cin >> x;
        if(mp.find(k - (x * x))!= mp.end()){
            cnt += mp[k - (x *x)];
        }
        mp[x]++;
    }
    cout << cnt << endl;
    return 0;
}
