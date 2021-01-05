#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef pair<int, int> P;

int main(){
  int N, K, M;
  cin >> N >> K >> M;
  //vector<int> A(N-1);
  int sum = 0;
  rep(i, N-1){
    int a;
    cin >> a;
    sum += a;
  }
  rep(i, 101){
    int ans = sum;
    ans += i;
    if(ans/N >= M && i <= K){
      cout << i << endl;
      return 0;
    }
  }
  cout << "-1" << endl;
  return 0;

}
