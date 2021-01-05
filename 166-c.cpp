#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef pair<int, int> P;

int main(){
  int N,M;

  cin >> N >> M;
  vector<int> H(N);
  vector<bool> f(N, true);
  rep(i, N){
    cin >> H[i];
  }
  rep(i, M){
    int a,b;
    cin >> a >> b;
    a--; b--;
    if(H[a] > H[b]){
      f[b] = false;
    }else if(H[b] > H[a]) {
      f[a] = false;
    }else{
      f[a] = false;
      f[b] = false;
    }
  }
  int ans = 0;
  rep(i, N){
    if(f[i]) ans++;
  }
  cout << ans << endl;
}
