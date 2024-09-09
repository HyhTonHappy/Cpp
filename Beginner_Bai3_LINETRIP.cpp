    #include <bits/stdc++.h>
    using namespace std;
    long long n;
    long long a[1005];

    int main()
    {
    cin >> n;
    for(int i = 1;i <=n ; i++) cin >>a[i];
    sort(a + 1, a+ 1 + n);
    long long max_x = a[n], min_x = a[1];
    cout << ( abs(max_x) + abs(min_x) ) + (max_x - min_x)    << endl;


        return 0;
    }
