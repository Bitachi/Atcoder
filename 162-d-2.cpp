#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef pair<int, int> P;

int main(){
  int N;
  string S;
  cin >> N;
  cin >> S;
  ll ng = 0;
  ll nb = 0;
  ll nr = 0;
  rep(i, N){
    if(S[i] == 'R'){
      nr++;
    }else if(S[i] == 'G'){
      ng++;
    }else if(S[i] == 'B'){
      nb++;
    }
  }
  ll ans = nr * ng * nb;
  for(int i = 0; i < N-2; i++){
    for(int j = i+1; j < N-1; j++){
      int k = 2*j-i;

      if(k >= N || k <=  j) continue;
      if(S[i] != S[j] && S[j] != S[k] && S[k] != S[i]){
        ans--;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
