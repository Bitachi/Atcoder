#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main(){
  int N;
  cin >> N;
  vector<int> set(100000, 0);
  vector<int> a(N);
  rep(i, N){
    cin >> a[i];
    set[a[i]]++;
  }
  int sum = 0;
  int max_sum = 0;
  int ans = 0;
  if(N >= 3){
    for(int i = 1; i < 100000-1; i++){
      if(set[i-1]+set[i]+set[i+1] >ans){
        ans = set[i-1]+set[i]+set[i+1];
      }
    }
  }else if(N == 1){
  ans = 1;
}else{
  if(abs(a[1] - a[0]) <= 2){
    ans = 2;
  }else{
    ans = 1;
  }
}

  cout << ans << endl;
  return 0;
}
