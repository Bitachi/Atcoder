#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef pair<int, int> P;
int main(){
  ll x;
  cin >> x;
  int i = 0;
  ll ans= 100;
  while(ans < x){
    ans = (ans * 1.01)/1;
    i++;
  }
cout << i<< endl;
}
