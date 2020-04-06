#include<bits/stdc++.h>
using namespace std;
int main(){
  //9:33:16

char S[101010];
  cin >> S;
  bool t[26];
  for(int i = 0; i < 26; i++){
    t[i] = false;
  }
  for(int i = 0; S[i] != '\0'; i++){
    t[S[i] - 'a'] = true;
  }
  for(int i = 0; i < 26; i++){
    if(!t[i]){
      cout << (char)(i + 'a') << endl;
      return 0;
    }
  }
  cout << "None" << endl;


  return 0;
}
