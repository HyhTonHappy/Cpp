#include <bits/stdc++.h>

using namespace std;
int main() {
    long long n; cin >> n;
    unordered_map <long long, long long> mp;
    for(int i = 1;i<=n;i++){
        long long value; cin >> value;
        mp[i] = value;
    }
    long long check = 0, sum = 0;
    for(int i = 1;i<= n;i+=check){
        sum += mp[i];
    }
    cout << sum / 2<< endl;
    return 0;
}
