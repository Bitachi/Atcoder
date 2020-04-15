#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

ll c2(ll n){
  return (n*(n-1))/2;
}

int main(){
  ll n, a, b;
  cin >> n >> a >> b;
  ll sum = 0LL;
  ll huge = pow(10, 9) + 7LL;
  //sum = (n*(n+1)*(n-1)/6 )% huge - ((a*(a-1))/2 + (b*(b-1))/2);
  ll n1mod = n % huge;
  ll n2mod = (n1mod * n1mod) % huge;
  ll n3mod = (n1mod * n2mod) % huge;
  cout << n1mod << " " << n2mod << " " << n3mod << endl;
 sum = ((n3mod - n1mod)/6 - ((a*(a-1))/2 + (b*(b-1))/2)%huge);
  //sum %= huge;
  if(sum < 0) sum += huge;
  if(sum < huge){
    cout << sum << endl;
  }else{
    cout << sum % huge << endl;
  }
  return 0;
}
