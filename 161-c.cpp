#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  ll N, K;
  cin >> N >> K;
  ll ans = N % K;
  if(abs(ans - K) < ans){
      ans = abs(ans - K);
  }
  cout << ans << endl;
  return 0;
}