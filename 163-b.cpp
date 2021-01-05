#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main(){
  int N, M;
  cin >> N >> M;
  vector<int> a(M);
  int sum = 0;

  rep(i, M){
    cin >> a[i];
    sum += a[i];
  }
  if(N - sum >= 0){
    cout << N - sum << endl;
  }else{
    cout << "-1" << endl;
  }
  return 0;
}
