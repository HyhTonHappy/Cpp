    #include <bits/stdc++.h>
    using namespace std;
    long long a[100005];
    long long b[100005];
    long long c[100005];
    int n;
    void bottomUp(){
        c[0] = 0;
        c[1] = 0;
        int cnt = 1;
        for(int i = 2;i<=n;i++){
            if(b[i] > b[i - 1]){
                c[i] = c[i - 1] + cnt;
                cnt = 1;
            } else if(b[i] == b[i - 1]){
            cnt++;
            c[i] = c[i - 1];
            } else{
            c[i] = c[i - 1];
            }
        }
    }

    long long check(int x){
    long long left = 1;
    long long right = n;
    while(left<=right){
     long long mid = (left + right) / 2;
        if(b[mid] == x ) {
            return c[mid];
        } else if ( b[mid] > x){
        right = mid - 1;
        } else {
        left = mid + 1;
        }
    }
    }

    int main()
    {
       cin >> n;
       for(int i = 1;i<=n;i++){
        cin >> a[i];
        b[i] = a[i];
       }
       sort(b + 1, b+ n + 1);
       bottomUp();
       for(int i = 1;i <=n ; i++){
        cout << check(a[i]) << " ";
       }

        return 0;
    }
