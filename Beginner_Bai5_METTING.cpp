#include <bits/stdc++.h>
using namespace std;
int main() {
  int t; cin >> t;
  char c; cin >> c;
  while(t--){
    string s; cin >> s;
    int n = s.size();
    bool flag = true;
    for(int i = 0;i < n;i++){
        if(s[i] == c){
            flag = false;
        }
    }
    if(flag == true){
    cout << s << endl;
    }
  }
    return 0;
}

