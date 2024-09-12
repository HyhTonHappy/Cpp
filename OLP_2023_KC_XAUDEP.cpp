#include <bits/stdc++.h>
using namespace std;

string s;
long long n, m;
long long l, r ;
long long a[26][1000005] = {0};

int main() {
    cin >> n >> m ;
    cin >> s;
    for(int i =0;i<n;i++){
            for(int j = 0; j< 26;j++){
                a[j][i + 1] = a[j][i];
            }
            a[s[i] - 'a'][i + 1]++;
        }
    while(m--){
        cin >> l >> r;
        long long cnt = 0;
        for(int i = 0 ; i < 26 ;i++){
            if((a[i][r + 1] - a[i][l]) % 2 == 1){
                cnt++;
            }
        }
        cout << cnt / 2 << endl;
    }
    return 0;
}
