#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main(){
  int N, C, K;
  cin >> N >> C >> K;
  vector<int> T(N);
  vector<int> bus(C);
  rep(i, N){
    cin >> T[i];
  }
  sort(T.begin(), T.end());

  int i = 0;
  int cnt = 0;
  int cap = 0;
  int limit = -101010;
  rep(i, N){
    if(cap >= C || T[i] > limit){
      cnt++;
      limit = T[i] + K;
      cap = 0;
    }
    cap++;
  }
  cout << cnt << endl;
  return 0;
}
