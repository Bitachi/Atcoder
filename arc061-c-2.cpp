#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main(){
  string s;
  cin >> s;
  int N = s.size();

  ll sum = 0LL;
  ll tmp;
  for(int bit = 0; bit < (1 << N-1); bit++){
    tmp = s[0] - '0';
    for(int i = 0; i < N-1; i++){
      if(bit&(1 << i)){
        //足し算を入れる
        sum += tmp;
        tmp = s[i+1] - '0';
      }else{
        //足し算を入れない⇔10倍？
        tmp *= 10;
        tmp += s[i+1] - '0';
      }
    }
    sum += tmp;
  }
  cout << sum << endl;
}
