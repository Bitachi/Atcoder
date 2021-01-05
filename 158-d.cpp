#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main(){
  string S;
  int Q;
  cin >> S >> Q;
  bool flag = false;
  rep(i, Q){
    int t;
    cin >> t;
    if(t == 1){

    flag = !flag;
    }
    else {
      int f;
      char c;
      cin >> f >> c;
      if(f == 1 && flag){
        //反転
        f = 2;
      }else if(f == 2 && flag){
        //反転
        f = 1;
      }
      if(f == 1){
        S.insert(0, 1, c);
      }else{
        S.push_back(c);
      }
    }
  }
  if(flag){
    for(int i = S.size()-1; i >= 0; i--){
      cout << S[i];
    }
    cout << endl;
  }else{
    cout << S << endl;
  }

}
