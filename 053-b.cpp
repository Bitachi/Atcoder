#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main(){
  string s;
  cin >> s;
  int a = 1;
  for(int i = 0; s[i] != 'A'; i++){
    a++;
  }
  int z = s.length();
  for(int i = s.length() - 1; s[i] != 'Z'; i--){
    z--;
  }
  cout << z-a+1 << endl;
  return 0;
}
