#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main(){
  int A, B, C;
  cin >> A >> B >> C;
  for(int i = 1; i < 100000; i++){
    if((B * i + C) % A == 0){
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;
  return 0;
}
