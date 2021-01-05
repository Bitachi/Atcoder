#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef pair<int, int> P;

int main(){
  ll h, n;
  ll INF = 10e9;
  cin >> h >> n;
  vector<ll> a(n), b(n);
  rep(i, n){
    cin >> a[i] >> b[i];
  }
  vector<ll> dp(h+1, INF);
  dp[0] = 0;
  rep(i, h){
    rep(j, n){
      ll aa = a[j];
      ll bb = b[j];
      ll dh = (i+1) - aa;
      if(dh <= 0){
        if(dp[i+1] > bb) dp[i+1] = bb;
      }else{
        if(dp[i+1] > bb + dp[dh]) dp[i+1] = bb + dp[dh];
      }
  //    cout << dp[i+1] << " ";
    }
//    cout << endl;
  }
  cout << dp[h] << endl;
}
