#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main(){
  int H, W;
  cin >> H >> W;
  string s[50+1];
  rep(i, H) cin >> s[i];
  rep(i, H){
    rep(j, W){
      if(s[i][j] == '#'){
        int cnt = 0;
        if(i-1 >= 0 && s[i-1][j] == '#') cnt++;
        if(i+1 < H && s[i+1][j] == '#') cnt++;
        if(j-1 >= 0 && s[i][j-1] == '#') cnt++;
        if(j+1 < W && s[i][j+1] == '#') cnt++;
        if(cnt == 0){
          cout << "No" << endl;
          return 0;
        }
      }
    }
  }
  cout << "Yes" << endl;
  return 0;
}
