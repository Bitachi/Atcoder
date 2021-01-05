#include<bits/stdc++.h>
using namespace std;
int main(){
  char S[100000+10];
  cin >> S;
  int N = strlen(S);
  int i = N-1;
  while(i > 0){
    if(S[i] == 'r' && S[i-1] == 'e'){
      if(S[i-2] == 'm' && S[i-3] == 'a' && S[i-4] == 'e' && S[i-5] == 'r' && S[i-6] == 'd'){
        i -= 7;
      }else if(S[i-2] == 's' && S[i-3] == 'a' && S[i-4] == 'r' && S[i-5] == 'e' ){
        i -= 6;
      }else{
        cout << "NO" << endl;
        return 0;
      }
    }else if((S[i] == 'e' && S[i-1] == 's' && S[i-2] == 'a' && S[i-3] == 'r' && S[i-4] == 'e')
          || (S[i] == 'm' && S[i-1] == 'a' && S[i-2] == 'e' && S[i-3] == 'r' && S[i-4] == 'd')){
      i -= 5;
    }else{
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
  return 0;
}
