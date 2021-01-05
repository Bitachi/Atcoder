#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef pair<int, int> P;

int main(){
  int R, C;
  char table[50+1][50+1];
  cin >> R >> C;
  int sx, sy, gx, gy;
  cin >> sy >> sx;
  cin >> gy >> gx;
  sy -=1;
  sx -=1;
  gy -=1;
  gx -=1;
  rep(i, R){
    rep(j, C){
      cin >> table[i][j];
    }
  }
  queue<P> q;
  q.push(P(sy, sx));
  int dx[4] = {-1, 1, 0, 0};
  int dy[4] = {0, 0, -1, 1};
  int d[50+1][50+1];
  bool flag[50+1][50+1];
  rep(i, 51){
    rep(j, 51){
      d[i][j] = 0;
      flag[i][j] = false;
    }
  }
  d[sy][sx] = 0;
  flag[sy][sx] = true;
  while(q.size()){
    P p = q.front();
    q.pop();
    //nx, ny: current position
    int ny = p.first;
    int nx = p.second;
    if(nx == gx && ny == gy) break;
    //ty, tx: position after moved
    int tx, ty;
    rep(i, 4){
      ty = ny + dy[i];
      tx = nx + dx[i];
      if(ty >=0 && ty < R && tx >= 0 && tx < C && table[ty][tx] == '.' && flag[ty][tx] == false){
        flag[ty][tx] = true;
        d[ty][tx] = d[ny][nx] + 1;
        q.push(P(ty, tx));
      }else{
        continue;
      }
    }
  }
  cout << d[gy][gx] << endl;
  return 0;

}
