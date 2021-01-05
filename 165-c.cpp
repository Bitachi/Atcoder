#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repp(i,a,  n) for (int i = a; i < (int)(n); i++)
typedef pair<int, int> P;


int N, M , Q;
vector<int> a, b ,c, d;
int ans;

void dfs(vector<int> A){
  if(A.size() == N+1) {
    int now = 0;
    rep(i, Q){
      if(A[b[i]] - A[a[i]] == c[i]){
        now += d[i];
      }
    }
    if(ans < now) ans = now;
    return ;
  }
  A.push_back(A.back());
  while(A.back() <= M){
    dfs(A);
    A.back()++;
  }
}

int main(){

  cin >> N >> M >> Q;
  a.resize(Q); b.resize(Q); c.resize(Q); d.resize(Q);

  rep(i, Q){
    cin >> a[i] >> b[i] >> c[i] >> d[i];
  }

  dfs(vector<int>(1, 1));
  cout << ans << endl;
}
