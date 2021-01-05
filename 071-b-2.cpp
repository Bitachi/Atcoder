#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef pair<int, int> P;

int main(){
  string S;
  cin >> S;
  int N = S.size();
  int a[26];
  rep(i, 26){
    a[i] = 0;
  }
  rep(i, N){
    a[S[i] - 'a']++;
  }
  rep(i, 26){
    if(a[i] == 0){
      char ans = i + 'a';
      cout << ans << endl;
      return 0;
    }
  }
  cout << "None" << endl;
  return 0;
}
