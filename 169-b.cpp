#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef pair<int, int> P;

int main(){
  int N;
  cin >> N;
  ll ans;
  cin >> ans;
  ll a;
  rep(i, N){
      cin >> a;
      ans *= a;
  }
  if(ans > 1000000000000000000){
      ans = -1;
  }
  cout << ans;
  return 0;
}
