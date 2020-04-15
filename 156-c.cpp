#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main(){
  int N;
  cin >> N;
  vector<int> X(N);
  rep(i, N) cin >> X[i];
  sort(X.begin(), X.end());
  int sum = 0;
  int min = 99999999;
  rep(i, 100+1){
    int P = i;
    sum = 0;
    rep(j, N){
      sum += pow(X[j] - P, 2);
    }
    if(min > sum) min = sum;
  }
  cout << min << endl;
  return 0;

}
