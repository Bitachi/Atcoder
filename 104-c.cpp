#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef pair<int, int> P;

int main(){
  ll D, G;
  cin >> D >> G;
  vector<pair<ll, ll>> pc(D);
  rep(i, D){
    cin >> pc[i].first >> pc[i].second;
  }

  ll sum, solve;
  ll ans = pow(10, 9);
  for(int bit = 0; bit < (1 << D); bit++){
    sum = 0;
    solve = 0;
    for(int i = 0; i < D; i++){
      if(bit & (1 << i)){
        //フラグが立っている場合
        sum += 100 * (i + 1) * pc[i].first + pc[i].second;
        solve += pc[i].first;
      }
    }
    if(sum >= G){
      ans = min(ans, solve);
    }else{
      for(int i = D-1; i >= 0; i--){
        if(bit & (1 << i)){
          //足し合わせをした場合
          continue;
        }else{
          for(int j = 0; j < pc[i].first; j++){
            if(sum >= G) break;
            //配点の高い問題をたす
            sum += 100 * (i+1);
            solve++;
          }
        }
      }
    }
    ans = min(ans, solve);
  }
  cout << ans << endl;
  return 0;
}
