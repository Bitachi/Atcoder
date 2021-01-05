#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef pair<int, int> P;

int main(){
  int h, a;
  cin >> h >> a;
  int ans = 0;
  while(h > 0){
    h -= a;
    ans++;
  }
  cout << ans << endl;
}
