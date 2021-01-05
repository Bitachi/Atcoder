#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main(){
  int N;
  cin >> N;
  vector<int> x(N);
  vector<int> y(N);
  rep(i, N){
    cin >> x[i] >> y[i];
  }
  double ans = 0;
  rep(i, N){
    rep(j, N){
      double kyori = sqrt(pow(x[j] - x[i], 2) + pow(y[j] - y[i], 2));
      if (ans  < kyori){
        ans= kyori;
      }
    }
  }
  cout << setprecision(12)<< ans << endl;
  return 0;
}
