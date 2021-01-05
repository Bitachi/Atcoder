#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef pair<int, int> P;

int n;
vector<vector<int>> g(1000);
vector<int> color(1000, 0);

bool dfs(int i, int c){
  color[i] = c;
  for(int j = 0; j < g[i].size(); j++){
    int gg = g[i][j];
    if(color[gg] == c) return false;
    //隣接する頂点も色ぬり
    if(color[gg] == 0 && !dfs(gg, -c)) return false;
  }
  //全部ぬれた場合
  return true;
}

int main(){
  cin >> n;
  g.resize(n);
  rep(i, n){
    int a;
    cin >> a; //頂点ごとの、隣接する頂点数
    //g[i].resize(a);
    rep(j, a){
      int b;
      cin >> b;
      g[i].push_back(b);
    }
}
  bool flag = true;
  for(int i = 0; i < n; i++){
    if(color[i] == 0){
      if(!dfs(i, 1)){
        cout << "No" << endl;

        return 0;
      }
  }
  }
  cout << "Yes" << endl;


}
