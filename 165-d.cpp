#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef pair<int, int> P;
int main(){
  ll a, b, n;
  cin >> a >> b >> n;
  ll x = min(n, b-1);

  cout << floor((a*x)/b) - a * floor(x/b) << endl;

}
