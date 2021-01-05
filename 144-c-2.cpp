#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef pair<int, int> P;

int main(){
  ll x;
  cin >> x;
  ll ans = x-1;
  ll n = sqrt(x);
  for(int i = 1; i <= n; i++){
    if (x % i == 0){
      ll j = x / i;
      if(ans > j + i - 2){
        ans = i + j - 2;
      }
    }
  }
  cout << ans << endl;
}
