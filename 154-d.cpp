#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef pair<int, int> P;
int main(){
  int N, K;
  cin >> N >> K;
  vector<double> p(N);
  vector<double> e(N);
  rep(i, N) cin >> p[i];
  rep(i, N){
    e[i] = (1 + p[i])/2.0;
  }
  double sum;
  double max = 0;
  vector<double> s(N+1);
  s[0] = 0.0;
  for(int i = 0; i < N; i++){
    s[i+1] += s[i] + e[i];
  }
  for(int i = 0; i + K <= N; i++){
    if(s[i+K] - s[i] > max){
      max = s[i+K] -s[i];
    }
  }
  cout <<setprecision(18)<< max << endl;
  return 0;
}
