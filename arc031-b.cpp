#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

char table[10][10];
char tablee[10][10];


void prepare(){
  rep(i, 10){
    rep(j, 10){
      tablee[i][j] = table[i][j];
    }
  }
}
void dfs(int i, int j){
//  cout << "b" << endl;
  int nx = j;
  int ny = i;
  //retuurn(ny, nx);
  tablee[ny][nx] = 'x';
  int dx[4] = {1, -1, 0, 0};
  int dy[4] = {0, 0, 1, -1};
  int tx, ty;
  //int cnt = 0;
  rep(k, 4){
    tx  = nx + dx[k];
    ty = ny + dy[k];
    if(tx >= 0 && tx < 10 && ty >= 0&& ty < 10 && tablee[ty][tx] == 'o'){
      dfs(ty, tx);
    }
  }
  //cout << cnt << endl;
  return;
}

int solve(){

  rep(i, 10){
    rep(j, 10){
      //talbee[i][j] = table[i][j];
      prepare();
      tablee[i][j] = 'o';
      int ans = 0;
      rep(y, 10){
        rep(x, 10){

          //cout << "a" << endl;
          if(tablee[y][x] == 'o'){
          //  cout << "a" << endl;
            dfs(y, x);
            ans++;
          }
        }
      }
      if(ans == 1){
        return 1;
      }
    }
  }
  return 0;
}



int main(){
  rep(i, 10){
    rep(j, 10){
      cin >> table[i][j];
    }
  }

  if(solve() == 1){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }
  return 0;

}
