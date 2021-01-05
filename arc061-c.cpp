#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main(){
  string s;
  cin >> s;
  int N = s.size();
  ll sum = 0;
  for(int bit = 0; bit < (1 << (N-1)); bit++){
    ll tmp = s[0] - 0x30;
    for(int i = 0; i < N-1; i++){
      if(bit & (1 << i)){
        //フラグが立っていれば＋をいれる
        sum += tmp;
        tmp = s[i+1] - 0x30;
      }else{
        //フラぐが０であれば、＋をいれない
        tmp *= 10;
        tmp += s[i+1] - 0x30;
      }
    }
    sum += tmp;
  }
  cout << sum << endl;
  return 0;
}
