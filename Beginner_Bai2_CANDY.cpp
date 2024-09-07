#include <bits/stdc++.h>
using namespace std;
unordered_map <long long, int> mp;
long long a[200005];
int main() {
    int n; cin >> n;
    for(int i = 1;i<=n;i++){
        cin >> a[i];
    }
    long long sum_a = a[1], sum_b = a[n];
    int l = 2, r = n - 1;
    while(l <= r){
        if(sum_a <= sum_b){
            sum_a += a[l];
            l++;
        }else {
        sum_b += a[r];
        r--;
        }
    }
    cout << abs(sum_a - sum_b) << endl;

    return 0;
}

