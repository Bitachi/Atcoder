#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int N = (int)S.length();
  for(int i = 0; i < (N-1)/2; i++){
      if(S[i] != S[N-1-i]){
          cout << "No" << endl;
          return 0;
      }
  }
  for(int i = 0; i < (N-1)/4; i++){
      if(S[i] != S[(N-1)/2-1-i]){
          cout << "No" << endl;
          return 0;
      }
  }
  for(int i = (N+3)/2-1; i < N; i++){
      if(S[i] != S[N-i-1]){
          cout << "No" << endl;
          return 0;
      }
  }
  cout << "Yes" << endl;
  return 0;
}