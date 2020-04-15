#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main(){
  char S[101010];
  cin >> S;
  bool a[26];
  //bool b[26];
  int i;
  for(i = 0; i < 26; i++){
    a[i] = false;
  //  b[i] = false;
  }
  for(i = 0; S[i] != '\0'; i++){
    a[S[i] - 'a'] = true;
  }
  int ans = 0;
  for(i = 0; i < 26; i++){
    if(a[i] == false){
      ans = 'a' + i;
      break;
    }
  }
  if(ans == 0){
      cout << "None" << endl;
  }else{
    cout << (char)ans << endl;
  }

  return 0;
}
