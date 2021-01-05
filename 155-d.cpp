#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main(){
  int N, K;
  cin >> N >> K;
  vector<ll> a(N);
  rep(i, N) cin >> a[i];

  vector<ll> minus;
  int n_minus = 0;
  vector<ll> plus;
  int n_plus = 0;
  int zero = 0;
  rep(i, N-1){
    for(int j = i + 1; j < N; j++){
      ll tmp = a[i] * a[j];
      if(tmp > 0){
        n_plus++;
        plus.push_back(tmp);
      }else if(tmp < 0){
        n_minus++;
        minus.push_back(tmp);
      }else{
        zero++;
      }
    }
  }
  if(K <= n_minus){
    sort(minus.begin(), minus.end());
    cout << minus[K-1] << endl;
  }else if(K > n_minus && K < zero + n_minus){
    cout << 0 << endl;
  }else{
    sort(plus.begin(), plus.end());
    cout << plus[K-1 - (n_minus + zero)] << endl;
  }
  return 0;
}
