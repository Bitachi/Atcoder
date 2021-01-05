#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main(){
  int H, W;
  cin >> H >> W;
  string S[50+1];
  rep(i, H) cin >> S[i];
  for(int i = 0; i < H; i++){
    for(int j = 0; j < W; j++){
      int cnt = 0;
      //cout << i << ' ' << j << endl;
      if(S[i][j] == '.'){
        for(int p = i-1; p <= i+1; p++){
          for(int q = j-1; q <= j+1; q++){
            //cout << p << ' ' << q << endl;
            if(p >= 0 && p < H && q >= 0 && q < W){
              if(S[p][q] == '#') cnt++;
            //  cout << p << ' ' << q << endl;
            }else{
              continue;
            }
          }
        }
        S[i][j] = char(cnt + '0');
      }else{
        continue;
      }
    }
  }
  rep(i, H){
    rep(j, W){
      cout << S[i][j];
    }
    cout << endl;
  }
  return 0;
}
