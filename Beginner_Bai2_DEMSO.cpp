    #include <bits/stdc++.h>
    using namespace std;
    long long n;


    int main()
    {
      cin >> n;
      long long am = 0, duong = 0;
      while(n--){
        string value; cin >> value;
        if(value[0] ==  '-'){
            am++;
        } else if(value == '0') {

        } else {
            duong++;
        }
      }
      cout << am << " " << duong << endl;

        return 0;
    }
