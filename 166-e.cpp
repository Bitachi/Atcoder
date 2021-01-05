#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef pair<int, int> P;

int main(){
  int N;
  cin >> N;
  vector<int> A(N);
  map<ll, int> mp1;
  //map<ll ,int> mp2;
  set<ll> index;
  //vector<int> map(pow(10, 9)+1, 0);
  //vector<vector<int>> index(pow(10, 9)+1);

  rep(i, N){
    cin >> A[i];
    mp1[i + A[i]]++;
  }


  ll ans = 0;
  for(int i = 0; i < N; i++){
    int Aj = i - A[i];
    ans += mp1[Aj];

  }
  cout << ans << endl;
}
