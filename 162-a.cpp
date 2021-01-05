#include<bits/stdc++.h>
using namespace std;
using ll = long long;
//#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main(){
  string N;
  cin >> N;
  bool flag = false;
  for(int i = 0; i < 3; i++){
    if(N[i] == '7') flag = true;
  }
  if(flag) {
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
  return 0;
}
