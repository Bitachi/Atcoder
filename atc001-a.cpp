#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

vector<vector<char>> table(500, vector<char>(500));
vector<vector<bool>> flag(500, vector<bool>(500));
int H, W;
void dfs(int p, int q){
  int nx = p;
  int ny = q;
  int tx;
  int ty;
  int x[4] = {-1, 1, 0, 0};
  int y[4] = {0, 0, -1, 1};
  rep(i, 4){
    tx = nx + x[i];
    ty = ny + y[i];
    if(tx >= 0 && tx < W && ty >= 0 && ty < H && (table[ty][tx] == '.' || table[ty][tx] == 'g')&& flag[ty][tx] == false){
      flag[ty][tx] = true;
      dfs(tx, ty);

    }else{
      continue ;
    }
  }
}
int main(){
  //int H, W;
  cin >> H >> W;
  int sx, sy, gx, gy;
  rep(i, H){
    rep(j, W){
      cin >> table[i][j];
      if(table[i][j] == 's'){
        sx = j;
        sy = i;
        //cout << sx << " "<< sy << endl;
      }else if(table[i][j] == 'g'){
        gx = j;
        gy  =i;
        //cout << gx << " " << gy << endl;
      }
    }
  }
  rep(i, 500){
    rep(j, 500){
      flag[i][j] = false;
    }
  }
dfs(sx, sy);

if(flag[gy][gx]){
  cout << "Yes" << endl;
}else{
  cout << "No" << endl;
}
  return 0;
}
