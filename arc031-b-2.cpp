#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
char t[10][10];
char tt[10][10];
//bool flag[10][10];



void copy(){
  rep(i, 10){
    rep(j, 10){
      tt[i][j] = t[i][j];
    }
  }
}

void dfs(int x, int y){
  int nx = x;
  int ny = y;
  int dx[4] = {-1, 1, 0, 0};
  int dy[4] = {0, 0, -1, 1};
  tt[y][x] = 'x';
  int tx, ty;
  rep(i, 4){
    tx = dx[i] + nx;
    ty = dy[i] + ny;
    if(tx >= 0 && tx < 10 && ty >= 0 && ty < 10 && tt[ty][tx] == 'o'){
      dfs(tx, ty);
    }
  }
  return;
}

int main(){
  rep(i, 10){
    rep(j, 10){
      cin >> t[i][j];
    }
  }
  //copy();
  rep(i, 10){
    rep(j, 10){
      copy();
      tt[i][j] = 'o';
      int ans = 0;
      rep(y, 10){
        rep(x, 10){
          if(tt[x][y] == 'o'){
            dfs(x,y);
            ans++;
          }
        }
      }
      if(ans == 1){
        cout << "YES" << endl;
        return 0;
      }
    }
  }
  cout << "NO" << endl;
  return 0;
}
