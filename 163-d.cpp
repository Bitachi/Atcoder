#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1000000007;
int main(){
  ll N , K;
  cin >> N >> K;
  ll sum = 0LL;
  for(ll i = K; i <= N+1; i++){
    sum += (i * (N - i + 1) + 1) % MOD;
  }

  cout << sum % MOD << endl;
}
