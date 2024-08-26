    #include <bits/stdc++.h>
    using namespace std;
    int a[100005];
    long long res_max = 0;
    long long cur_sum = 0;
    int main()
    {
       int n, k; cin >> n >> k;
       for(int i = 1;i <=n ;i++){
        cin >> a[i];
       }
       for(int i = 1;i<=k;i++){
        cur_sum += a[i];
       }
       res_max = cur_sum;
       for(int i = k + 1;i<=n;i++){
        cur_sum = cur_sum - a[i - k] + a[i];
        res_max = max(res_max, cur_sum);
       }
       cout << res_max << endl;

        return 0;
    }
