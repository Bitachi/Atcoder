#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

ll digit(ll n){
  return log10(n) + 1LL;
}


int main(){
  ll A, B, X;
  cin >> A >> B >> X;
  ll n;
  ll max_d = 0;
  for(int d = 1; d <= 10; d++){
    n = pow(10, d-1);
    if(n <= (X - B * d) / A){
      max_d  = d;
    }
  }
  if(max_d == 0){
    cout << 0 << endl;
    return 0;
  }
  ll  left = 0;
  ll right = pow(10, 9) + 1;
  ll mid;
  while(right - left > 1){
    mid = (right  + left) / 2;
    if(A * mid + B * digit(mid) <= X){
      left = mid;
    }else{
      right = mid;
    }
  }
  cout << left << endl;
  return 0;
}
