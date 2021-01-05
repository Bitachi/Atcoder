#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int a[4];
  string s;
  cin >> s;
  rep(i, 4){
    a[i] = s[i] - 0x30;
  }
  char op[3];
  rep(i, 2){
    rep(j, 2){
      rep(k, 2){
        int ans = a[0];
        if(i == 0){
          ans += a[1];
          op[0] = '+';
        }else{
          ans -= a[1];
          op[0] = '-';
        }
        if(j == 0){
          ans += a[2];
          op[1] = '+';
        }else{
          ans -= a[2];
          op[1] = '-';
        }
        if(k == 0){
          ans += a[3];
          op[2] = '+';
        }else{
          ans -= a[3];
          op[2] = '-';
        }
        if(ans == 7){
          cout << a[0];
          rep(i, 3){
            cout << op[i] << a[i+1];
          }
          cout << "=7" << endl;
          return 0;
        }
      }
    }
  }

}
