#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef pair<int, int> P;

int main(){
  int N;
  cin >> N;
  vector<vector<ll>> num(10, vector<ll>(10, 0));
  for(int i = 1; i <= N; i++){
    int n = i;
    vector<int> d;
    while(n){
      d.push_back(n % 10);
      n /= 10;
    }
    int a = d[0];
    int b = d.back();
    if(a == 0||b == 0){
      continue;
    }
    num[a][b]++;
  }
  ll ans = 0;
  for(int a = 1; a < 10; a++){
    for(int b = 1; b < 10; b++){
      ans += num[a][b] * num[b][a];
    }
  }
  cout << ans << endl;
}
