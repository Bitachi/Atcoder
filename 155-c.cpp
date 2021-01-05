#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main(){
  int N;
  cin >> N;
  map<string, int> m;
  rep(i, N){
    string s;
    cin >> s;
    m[s]++;
  }
  int max_v = 0;
  for(auto c = m.begin(); c != m.end(); c++){
    max_v = max(max_v, c->second);
  }

  vector<string> st;
  int cnt = 0;
  //auto c = m.begin();
  for(auto c = m.begin(); c != m.end(); c++){
    if (c->second == max_v){
      st.push_back(c->first);
      cnt++;
    }else{
      continue;
    }
  }
  sort(st.begin(), st.end());
  rep(i, cnt){
    cout << st[i] << endl;
  }
  return 0;
}
