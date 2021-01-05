#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef pair<int, int> P;

ll integer(string s){
  int n = s.size();
  ll ans = 0;
  for(int i = n-1; i >= 0; i--){
    ans += (s[i] - '0') * pow(10, n-i-1);
  }
  return ans;
}


int main(){
  string S;
  cin >> S;
  ll N = S.size();
  ll ans = 0L;
  int i, j;
  for(i = 4; i <= N; i++){
    for(j = 0; j + i <= N; j++){
      string str = S.substr(j, i);
      ll x = integer(str);
      if(x % 2019 == 0) ans++;
    }
  }
  cout << ans << endl;
}
