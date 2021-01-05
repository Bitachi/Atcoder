#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main(){
  int N, K;
  cin >> N >> K;
  cout << setprecision(32)<< K * pow(K-1, N-1) << endl;
  return 0;
}
