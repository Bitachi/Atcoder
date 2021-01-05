#include<bits/stdc++.h>
using namespace std;
int main(){
  string S;
  cin >> S;
  queue<int> BFS;
  BFS.push(0);
  bool flag = false;
  string dic[4] = {"erase", "eraser", "dream", "dreamer"};
  reverse(S.begin(), S.end());
  for(int i = 0; i < 4; i++){
    reverse(dic[i].begin(), dic[i].end());
  }

  while(!BFS.empty()){
    int t = BFS.front();
    BFS.pop();
    if(S.length() == t){
      flag = true;
      break;
    }
    for(int i = 0; i < 4; i++){
      if(S.substr(t, dic[i].length()) == dic[i]){
        BFS.push(t + dic[i].length());
      }
    }
  }
  if(flag){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }
  return 0;
}
