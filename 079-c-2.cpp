#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef pair<int, int> P;

int main(){
  string s;
  bool op[3];
  int tmp;
  cin >> s;
  int p[4];
  rep(i, 4){
    p[i] = s[i] - 0x30;
  }
  for(int bit = 0; bit < (1 << 3); bit++){
    tmp = p[0];
    for(int i = 0; i < 3; i++){
      if(bit & (1 << i)){
        tmp += p[i+1];
        op[i] = true;
      }else{
        tmp -= p[i+1];
        op[i] = false;
      }
    }
    if(tmp == 7){
      cout << p[0];
      rep(i, 3){
        if(op[i]){
          cout << "+";
        }else{
          cout << "-";
        }
        cout << p[i+1];
      }
      cout << "=7" << endl;
      return 0;
    }
  }
  return 0;
}
