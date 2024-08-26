#include <bits/stdc++.h>
using namespace std;
long long n;
long long res = -10000000LL;
long long check = 0;

int main()
{
    cin >> n;
    for(int i = 1;i <=n ;i++){
        long long x; cin >> x;
        check = max(x, check + x);
        res = max(check, res);
    }
    cout << res << endl;
    return 0;
}
