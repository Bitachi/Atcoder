#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef pair<int, int> P;
int main(){
  int N, K;
  cin >> N >> K;
  //vector<double> p(N);
  vector<double> e(N);
  rep(i, N){
    double a;
    cin >> a;
    e[i] = (a+1)/2;
  }
  vector<double> s(N+1);
  s[0] = 0.0;
  for(int i = 1; i <= N; i++){
    s[i] += s[i-1] + e[i-1];
  }
  double ans = 0.0;
  for(int i = 0; i + K <= N; i++){
    if(ans < s[i+K] - s[i]){
      ans = s[i+K] - s[i];
    }
  }
  cout <<setprecision(18)<< ans << endl;
  return 0;
}
