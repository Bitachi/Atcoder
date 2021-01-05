#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef pair<int, int> P;


int main(){
  int N, K;
  int R,S,P;
  string T;

  cin >> N >> K;
  cin >> R >> S >> P;
  cin >> T;
  vector<bool> TT(N, true);
  //bool rr, ss, pp = false;
  int ans =0;

  rep(i, N){
    if(i < K){
      if(T[i] == 'r'){
        ans += P;
        //rr = true;
      }else if(T[i] == 's'){
        ans += R;
        //ss = true;
      }else{
        ans += S;
        //pp = true;
      }
    }else{
      if(T[i] == 'r'){
        if(T[i-K] != T[i] || (T[i-K] == T[i] && !TT[i-K])){
          ans += P;
          //rr =true;
        }else{
          //rr = false;
          TT[i] = false;
        }
      }else if(T[i] == 's'){
        if(T[i-K] != T[i] || (T[i-K] == T[i] && !TT[i-K])){
          ans += R;
          //ss =true;
        }else{
          //ss = false;
          TT[i] = false;
        }
      }else{
        if(T[i-K] != T[i] || (T[i-K] == T[i] && !TT[i-K])){
          ans += S;
          //pp =true;
        }else{
          //pp = false;
          TT[i] = false;
        }
      }
    }
  }
  cout << ans << endl;
}
