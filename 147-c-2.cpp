#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef pair<int, int> P;

int N;
vector<int> A(N);
vector<vector<P>> p;

bool judge(int bit){

  rep(i, N){
    if(!(bit & (1 << i))) continue;
    for(P a : p[i]){
      if((a.second == 1 && !(bit & (1 << a.first))) ||
         (a.second == 0 && (bit & (1 << a.first)))){
           return false;
         }
    }
  }

  return true;
}

int main(){
  //最初に、正直な人2^N通りを固定し、それぞれの証言を検証する
  //矛盾（正直なのに嘘つきであるという証言、その対偶）があればbreak
  cin >> N;
  p.resize(N);
  rep(i, N){
    int a, x, y;
    cin >> a;
    p[i].resize(a);
    rep(j, a){
      cin >> x >> y;
      x--;
      p[i][j].first = x;
      p[i][j].second = y;
    }
  }
  int ans = -9999;
  int cnt;
  for(int bit = 0; bit < (1 << N); bit++){
    if(judge(bit)){
      cnt = 0;
      for(int i = 0; i < N; i++){
        if(bit & (1 << i)){
          cnt++;
        }
      }
      ans = max(ans, cnt);
    }
  }
  cout << ans << endl;
}
