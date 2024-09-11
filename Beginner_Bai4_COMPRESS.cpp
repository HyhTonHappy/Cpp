#include <bits/stdc++.h>

using namespace std;
int main() {
    string s; cin >> s;
    int n = s.size();
    for(int i = 1;i <=n ;i++){
        bool flag = true;
        if(n % i != 0) continue;
        for(int j = 0 ; j < n; j++){
            if(s[j] != s[j % i]){
                flag= false;
                break;
            }
        }
        if(flag){
            cout << to_string(n/i)  << s.substr(0, i);
            break;
        }
    }
    return 0;
}
