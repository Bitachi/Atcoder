#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef pair<int, int> P;


int main(){
  ll n;
  cin >> n;
  ll min;
  for(ll i = sqrt(n); i >= 1; i--){
    if(n % i == 0){
      min = i;
      break;
    }
  }
  cout << min + n / min - 2<< endl;
}
