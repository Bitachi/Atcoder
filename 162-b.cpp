#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main(){
  int N;
  cin >> N;
  ll sum = 0;
  for(int i = 0; i <= N; i++){
    if(!(i % 3 == 0 || i % 5 == 0)) sum += i;
  }
  cout << sum << endl;
  return 0;
}
