#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef pair<int, int> P;

int main(){
  int N,M;

  cin >> N >> M;
  vector<int> H(N);
  rep(i, N){
    int a;
    cin >> a;
    H[i] = a;
  }
  vector<vector<int>> g(N);
  rep(i, M){
    int a, b;
    cin >> a >> b;
    a--; b--;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  int ans = 0;
  bool flag;
  rep(i, N){
    flag = true;
    for(int j = 0; j < g[i].size(); j++){
      if(H[i] <= H[g[i][j]]) flag = false;
    }
    if(flag) ans++;
  }
  cout << ans << endl;
}
