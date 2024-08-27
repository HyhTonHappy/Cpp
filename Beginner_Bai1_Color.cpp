    #include <bits/stdc++.h>
    using namespace std;
    long long n, k;
   long long b = 1e9 + 7;


    int main()
    {
      cin >> n >> k;
      long long sum_n = 1;
      for(int i = n - k + 1 ;i>= (n - k + 1 - k+1); i--){
        sum_n *= i % b;
      }
      long long sum_k = 1;
      for(int i = k;i>=1;i--){
        sum_k *= i % b;
      }
      long long res = sum_n / sum_k % b;
      cout << res << endl;

        return 0;
    }
