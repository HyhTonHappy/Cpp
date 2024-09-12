#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        unordered_map<long long, long long> cnt;
        long long l = 0, total_plays = 0;

        for (long long r = 0; r < n; r++) {
            cnt[a[r]]++;

            while (cnt[a[r]] > 1) {
                cnt[a[l]]--;
                l++;
            }

            total_plays += (r - l + 1);
        }

        cout << total_plays << endl;
    }

    return 0;
}
