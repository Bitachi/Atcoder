#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main(){
  int N;
  string S;
  cin >> N >>  S;
  ll nr=0;
  ll ng=0;
  ll nb = 0;
  for(auto c : S){
    if (c == 'R') {
      //R.push_back(i);
      nr++;
    }else if(c == 'G'){
      //G.push_back(i);
      ng++;
    }else if(c == 'B'){
      //B.push_back(i);
      nb++;
    }
  }
  ll ans = nr * nb * ng;
  for(int i = 0; i < N-2; i++){
    for(int j = i+1; (2*j - i )< N; j++){
      int k = 2 * j - i;
      if(k < N){
        if((S[i] != S[k] )&& (S[j] != S[k]) && (S[i] != S[j])) ans--;
      }
    }
  }


  cout << ans << endl;

  return 0;
}
