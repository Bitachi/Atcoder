#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef pair<int, int> P;

int main(){
  ll h;
  cin >> h;
  ll r = log2(h) + 1;
  cout << setprecision(16)<<pow(2, r) - 1 << endl;
}
