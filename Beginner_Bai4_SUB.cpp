#include <bits/stdc++.h>

using namespace std;
int main() {
    int t; cin >> t;
    while(t--){
      int n; cin >> n;
      vector <long long> a(n);
      long long res = -10000000LL;
      long long check = 0;
      long long res_lt = -10000000LL;
      long long cur = -10000000LL;
      bool flag = false;
      for(int i = 0;i < n; i++){
        cin >> a[i];
        if(a[i] > 0){
            check += a[i];
            flag = true;
        }
        res= max(res, a[i]);

        if(flag == true){
            res = check;
        }
        cur = max(a[i], cur + a[i]);
        res_lt = max(res_lt, cur);
      }
    cout<<res << " " << res_lt << endl;

    }
    return 0;
}
