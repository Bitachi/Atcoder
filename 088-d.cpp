#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef pair<int, int> P;

int R, C;
int d[50][50];
char t[50][50];
int bk = 0;
int main(){
  cin >> R >> C;
  rep(i, R){
    rep(j, C){
      cin >> t[i][j];
    }
  }
  rep(i, R){
    rep(j, C){
      if(t[i][j] == '#') bk++;
      d[i][j] = -1;
    }
  }
  queue<P> que;
  que.push(P(0, 0));
  d[0][0] = 1;
  int nx, ny, tx, ty;
  int dx[4] = {1, -1, 0, 0};
  int dy[4]= {0, 0, 1, -1};
  while(que.size()){
    P p = que.front();
    que.pop();
    t[ny][nx] = '#';
    ny = p.first;
    nx = p.second;
    rep(i, 4){
      ty = dy[i] + ny;
      tx = dx[i] + nx;
      if( tx >= 0 && tx < C && ty >= 0 && ty < R && t[ty][tx] == '.' && d[ty][tx] == -1){
        que.push(P(ty, tx));
        d[ty][tx] = d[ny][nx] + 1;
      }
    }
  }
  if(d[R-1][C-1]>= 0){
    cout << R * C - d[R-1][C-1] - bk  << endl;
  }else{
    cout << "-1" << endl;
  }
  return 0;
}
