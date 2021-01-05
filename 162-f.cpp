#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main(){
  int N;
  cin >> N;
  vector<int> a(N);
  rep(i, N){
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  ll sum = 0;
  int N1 = floor(N/2);
  int i = N-1;
  int cnt = 0;
  while(cnt != N1-1){
    cnt++;
    sum += a[i];
    i--;
  }
  cout << sum << endl;
  return 0;
}
