#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

const ll MOD = 1000000007;

ll modpow(ll x, ll n){
  x %= MOD;
  if(n == 0) return 1; //再帰終了

  else if(n % 2 == 1){
    return  (x * modpow(x, n-1)) % MOD; //nが奇数ならnを1ずらす
  }else{
    return  modpow((x*x) % MOD, n/2) % MOD; //nが偶数ならnは半分になる
  }
}

ll comb(ll n, ll k){
  ll x = 1;
    for(int i=n-k+1; i<=n; i++) {
        x = x*i%MOD;
    }

    ll y = 1;
    for(int i=1; i<=k; i++) {
        y = y*i%MOD;
    }
    y = modpow(y, MOD-2);

    return x*y%MOD;
}

int main(){
  ll n, a, b;
  cin >> n >> a >> b;
  ll all = modpow(2, n)-1;
  ll aa =comb(n, a);
  ll bb = comb(n, b);
  ll ans = (all - aa - bb) % MOD;
  while(ans < 0) ans += MOD;
  cout << ans << endl;
  return 0;
}
