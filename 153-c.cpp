#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef pair<int, int> P;

int main(){
  int n, k;
  cin >> n >> k;
  priority_queue<ll> q;
  rep(i, n){
    ll a;
    cin >> a;
    q.push(a);
  }
  if(n >= k){
    rep(i, k){
      q.pop();
    }
  }else{
    cout << 0 << endl;
    return 0;
  }
  ll cnt = 0;
  while(!q.empty()){
    ll qq = q.top(); q.pop();
    cnt += qq;
//cout << qq << endl;
  }
  cout <<  cnt << endl;
}
