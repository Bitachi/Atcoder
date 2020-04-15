#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main(){
  int N, K;
  cin >> N >> K;
  vector<int> set(N+1, 0);
  rep(i, N){
    int a;
    cin >> a;
    set[a]++;
  }
  sort(set.begin(), set.end(), greater<int>());
  int cnt = 0;
  int flag = N;
  rep(i, N){
    if(set[i] != 0){
      cnt++;
    }
    if(cnt == K){
      flag = i;
      break;
    }
  }
  int ans = 0;
  for(int i = flag+1; i < N; i++){
    ans += set[i];
  }
  cout << ans << endl;
  return 0;

}
