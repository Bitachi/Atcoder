#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main(){
  string s, t;
  cin >> s;
  cin >> t;
  sort(s.begin(), s.end());
  sort(t.begin(), t.end());
  reverse(t.begin(), t.end());
  if (s < t){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
  return 0;

}
