#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef pair<int, int> P;
int N;
vector<vector<P>> A;
bool judge(int bit){
  rep(i, N){
    //i人目の証言を検証

    //i人目が不親切ならば飛ばす
    if(!(bit & (1 << i))) continue;

    for(P p : A[i]){
      int x = p.first;    //人x_ij
      int y = p.second;   //正直 or 不親切
      if(y == 0 && (bit & (1 << x))) return false; //y = 0なのに正直
      if(y == 1 && !(bit & (1 << x))) return false;//y = 1なのに不親切
    }
  }
  return true;
}


int main(){

  cin >> N;
  A.resize(N);
  rep(i, N){
    int a;
    cin >> a;
    A[i].resize(a);
    rep(j, a){
      cin >> A[i][j].first >> A[i][j].second;
      A[i][j].first--;
    }
  }
  //正直者の固定は2^N通り
  int ans = -9999;
  int cnt;
  for(int bit = 0; bit < (1 << N); bit++){
    if(judge(bit)){
      //bitに含まれる人数
      cnt = 0;
      rep(i, N){
        if(bit & (1 << i)) cnt++;
      }
      ans = max(ans, cnt);
    }
  }
  cout << ans << endl;
  return 0;
}
