#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef pair<int, int> P;
typedef pair<double, double> PP;

vector<P> t(10);

int x[10], y[10];
int facctorialMethod(int k){
    int sum = 1;
    for (int i = 1; i <= k; ++i)
    {
        sum *= i;
    }
    return sum;
}

double dis(int i, int j){
  double dx = t[i].first - t[j].first;
  double dy = t[i].second - t[j].second;
  return pow(dx*dx+ dy*dy, 0.5);
}

double dis2(int i, int j){
  double dx = x[i] - x[j];
  double dy = y[i] - y[j];
  return pow(dx*dx+ dy*dy, 0.5);
}

int main() {
  int N;
  cin >> N;

  vector<int> v(N);
  rep(i, N){
    v[i] = i+1;
    cin >> x[i+1] >> y[i+1];
  }
  double sum = 0;
  do{
    rep(i, N-1){
      sum += dis2(v[i], v[i+1]);
    }
  }while(next_permutation(v.begin(), v.end()));
  cout << setprecision(12) << sum / facctorialMethod(N) << endl;
}
