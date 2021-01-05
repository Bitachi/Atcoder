#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main(){
  int N;
  cin >> N;
  vector<vector<int>> s(2, vector<int>(N));
  rep(i, 2){
    rep(j, N){
      cin >> s[i][j];
    }
  }
  int max = 0;
  int row = 0;
  rep(ii, N){
    int cnt = 0;
    row = 0;
    rep(i, N){
      cnt += s[row][i];
      if(i == ii){
        row = 1;
        cnt += s[row][i];
      }
      if(max < cnt) max = cnt;
    }
  }
  cout << max << endl;
  return 0;
}
