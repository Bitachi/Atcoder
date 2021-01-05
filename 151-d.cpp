#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef pair<int, int> P;

int H, W;
//vector<vector<char>> t(H, vector<char>(W));
//vector<vector<char>> tt(H, vector<char>(W));
//vector<vector<int>> d(H, vector<int>(W));
char t[20][20];
char tt[20][20];
int d[20][20];
void t_copy(){
  rep(i, H){
    rep(j, W){
      tt[i][j] = t[i][j];
    }
  }
}
void initi(){
  rep(i, H){
    rep(j, W){
      d[i][j] = -1;
    }
  }
}
int main(){

  cin >> H >> W;

  rep(i, H){
    rep(j, W){
      cin >> t[i][j];
    }
  }
  int sy, sx;
  int gy, gx;


  int ans = -1;
  int ny, nx;
  int ty, tx;

  int dx[4] = {0, 0, -1, 1};
  int dy[4] = {1, -1, 0, 0};

  rep(y0, H){
    rep(x0, W){
      if(t[y0][x0] == '#'){
        continue;
      }
      t_copy();
      initi();
      sy = y0;
      sx = x0;
      queue<P> q;
      int maxdif = -1;
      q.push(P(sy, sx));
      d[sy][sx] = 0;
      while(q.size()){
        P p = q.front();
        q.pop();
        ny = p.first;
        nx = p.second;
        tt[ny][nx] = '#';
        rep(i, 4){
          ty = dy[i] + ny;
          tx = dx[i] + nx;
          if(ty >= 0 && ty < H && tx >= 0 && tx < W && d[ty][tx] == -1 && tt[ty][tx] == '.'){
            d[ty][tx] = d[ny][nx] + 1;
            q.push(P(ty, tx));
            maxdif = max(maxdif, d[ty][tx]);
          }
        }
      }
      ans = max(ans, maxdif);
    }
  }
  cout << ans << endl;
}
