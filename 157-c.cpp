#include<bits/stdc++.h>
using namespace std;
int main(){
  int N, M;
  cin >> N >> M;
//  vector<int> s(M);
//  vector<int> c(M);

  int s, c;
  bool flag = true;
  vector<int> set(N, -1);
  for(int i = 0; i < M; i++){
    cin >> s >> c;
    if(set[s-1] == -1 || set[s-1] == c){
      set[s-1] = c;
    }else{
      cout << -1 <<endl;
      return 0;
    }
  }

  if(N!=1 && set[0] == 0){
    cout << -1 << endl;
    return 0;
  }

  for(int i = 0; i < N; i++){
    if(i == 0 &&  N != 1){
      if(set[i] == -1) set[i] = 1;
    }else{
      if(set[i] == -1) set[i] = 0;
    }
    cout << set[i];
  }
  cout << endl;
  return 0;
}
