#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main(){
  int N;
  cin  >> N;
  ll ans = 1;
  ll huge = pow(10, 9) + 7;
  for(int i = 1; i <= N; i++){
    ans *= i;
    if(ans >= huge){
      ans %= huge;
    }
  }
  cout << ans << endl;
  return 0;
}
