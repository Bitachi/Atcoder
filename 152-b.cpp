#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef pair<int, int> P;

int main(){
  int n, m;
  cin >> n >> m;
  string s;
  if(n < m){
    rep(i, m){
      cout << n;
    }
    cout << endl;
  }else if(m < n){
    rep(i, n){
      cout << m;
    }
    cout << endl;
  }else{
    rep(i, m){
      cout << m;
    }
    cout << endl;
  }
}
