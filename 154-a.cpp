#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef pair<int, int> P;

int main(){
  string s, t, u;
  int a, b;
  cin >> s >> t;
  cin >> a >> b;
  cin >> u;
  if(s == u){
    cout << a-1 << " "<<b << endl;
  }else{
    cout << a << " " << b-1 << endl;
  }
  return 0;
}
