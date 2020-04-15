#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(ii, n) for (int ii = 0; ii < (int)(n); ii++)
int main(){
  int W, H, N;
  cin >> W >> H >> N;
  vector<vector<int>> T(H, vector<int>(W, 1));
  rep(ii, N){
    int a, x, y;
    cin >> x >> y >> a;
    int i, j;
    if(a == 1){
      // drow x << xi
      for(i=0; i<H; i++){
        for(j=0; j<x; j++){
          T[i][j] = 0;
        }
      }
    }else if(a == 2){
      // drow x > xi
      for(i=0; i<H; i++){
        for(j=x; j<W; j++){
          T[i][j] = 0;
        }
      }
    }else if(a == 3){
      //drow y < yi
      for(i = 0; i < y; i++){
        for(j = 0; j < W; j++){
          T[i][j] = 0;
        }
      }
    }else{
      //drow y > yi
      for(i = y; i < H; i++){
        for(j = 0; j < W; j++){
          T[i][j] = 0;
        }
      }
    }
  }
  int cnt = 0;
  rep(i, H){
    rep(j, W){
      cnt += T[i][j];
    }
  }
  cout << cnt << endl;
  return 0;
}
