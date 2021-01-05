#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef pair<int, int> P;
int main(){
  ll s, t, k;
  cin >> s >> t >> k;
  if(s-k >= 0){
    s -= k;
  }else{
    if(s+t-k >= 0){
      t = s + t-k;
      s = 0;
    }else{
      s = 0;
      t = 0;
    }
  }
  cout << s << " " << t << endl;
}
