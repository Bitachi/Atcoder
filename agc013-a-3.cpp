#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef pair<int, int> P;

int main(){
  int n;
  cin >> n;
  vector<ll> a(n);
  rep(i, n){
    cin >> a[i];
  }
  ll ans = 0LL;
  rep(i, n){
    while(a[i+1] - a[i] > 0){
      ans++;
    }
    while(a[i+1] - a[i]  <0){
      ans++;
    }
    while(a[i+1] - a[i] == 0){
      ans++;
    }
  }
  cout << ans << endl;
}
