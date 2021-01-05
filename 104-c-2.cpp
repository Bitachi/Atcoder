#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef pair<int, int> P;

int main(){
  int D, C;
  cin >> D >> C;
  vector<int> p(D);
  vector<int> c(D);
  rep(i, D){
    cin >> p[i] >> c[i];
  }

  int ans = 999999;
  int solve, sum;

  for(int bit = 0; bit < (1 << D); bit++){
    solve = 0;
    sum = 0;
    for(int i = 0; i < D; i++){
      if(bit & (1 << i)){
        sum += (i+1) * 100 * p[i] + c[i];
        solve += p[i];
      }
    }
    if(sum >= C){
      ans  = min(ans, solve);
    }else{
      for(int i = D-1; i >= 0; i--){//配点の大きい逆側から１つずつたすå
        if(bit & (1 << i)){ //bitは不変なので、iを回す順番を変えても、ビットが立っている部分は判定できる
          //ビットが立っている部分はすでに前で足しているので、飛ばす必要がある、
          continue;
        }else{
          for(int j = 0; j < p[i]; j++){
            if(sum >= C) break;
            sum += (i+1) * 100;
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
