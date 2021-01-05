#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef pair<int, int> P;



int main(){
  int R, C;
  int sy, sx;
  int gy, gx;
  char t[50][50];
  int d[50][50];

  cin >> R >> C;
  cin >> sy >> sx;
  cin >> gy >> gx;
  sy -= 1;
  sx -=1;
  gy -=1;
  gx -=1;
  rep(i, R){
    rep(j, C){
      cin >> t[i][j];
    }
  }

  rep(i, 50){
    rep(j, 50){
      d[i][j] = -1;
    }
  }
  d[sy][sx] = 0;
  queue<P> que;
  que.push(P(sy, sx));
//  t[sy][sx] = '#';
  int nx, ny, tx, ty;
  int dx[4]  = {1, -1, 0, 0};
  int dy[4] = {0, 0, -1, 1};
  while(que.size()){
    P p = que.front();
    que.pop();
    nx = p.second;
    ny = p.first;
    if(nx == gx && ny == gy) break;
    t[ny][nx] = '#';
    rep(i, 4){
      tx = nx + dx[i];
      ty = ny + dy[i];
      if(tx >= 0 && tx < C && ty >= 0 && ty < R && d[ty][tx] == -1 && t[ty][tx] == '.'){
        d[ty][tx] = d[ny][nx] + 1;
        que.push(P(ty, tx));
      }
    }
  }
  cout << d[gy][gx] << endl;
  return 0;
}
