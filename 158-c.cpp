#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef pair<int, int> P;

int main(){
  int a, b;
  cin >> a >> b;
  rep(i, 1251){
    int a1 = ( i * 0.08) / 1;
    int a2 = ( i * 0.1 ) / 1;
    if(a1 == a && a2 == b){
      cout << i << endl;
      return 0;
    }
  }
  cout << -1 << endl;

}
