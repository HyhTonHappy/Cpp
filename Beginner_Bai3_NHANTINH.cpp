#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector <long long> vt(n + 1);
    for(int i = 1;i<=n;i++){
        cin >> vt[i];
    }
    bool flag = true;
    for(int i = 1;i <=n ;i++){
        for(int j = 1;j * i <=n; j++){
                if(vt[i] * vt[j] != vt[i*j]){
                    flag = false;
                    break;
            }
        }
        if(flag == false){
                break;
            }
    }
    if(flag == true){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}

