#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const int MAX = 999999;
const int MOD = 1000000007;

long long fac[MAX], finv[MAX], inv[MAX];

// テーブルを作る前処理
void COMinit() {
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < MAX; i++){
        fac[i] = fac[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;
    }
}

// 二項係数計算
long long COM(int n, int k){
    if (n < k) return 0;
    if (n < 0 || k < 0) return 0;
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}
ll nCr(int n, int r) {
    ll ans = 1;
    for (int i = n; i > n - r; --i) {
        ans = ans*i;
    }
    for (int i = 1 ; i < r + 1; ++i) {
        ans = ans / i;
    }
    return ans;
}

int main(){
  COMinit(); //前処理
  ll x, y;
  cin >> x >> y;
  ll yy = x/2;
  ll cnt = 0LL;
  ll ans;
  if(x % 2 == 0){
    if((y - x/2) % 3 !=0 ){
      ans = 0LL;
    }else{
      cnt = (y - x/2) / 3;
      ans = COM(x/2+cnt, 2*cnt);
    //  return 0;
    }
  }else{
    if((y - ((x+1)/2+1))% 3 != 0){
      ans = 0LL;
    }else{
      cnt = (y - (x+1)/2+1) / 3;
      ans = COM((x+1)/2+cnt, 2*cnt+1);
    }
  }
  cout << ans %  MOD<< endl;

}
