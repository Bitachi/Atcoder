#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef pair<int, int> P;

int main(){
  int N, M;
  cin >> N >> M;
  set<int> st;
  int fail = 0;
  vector<int> f(N+1, 0);
  rep(i, M){
    int a;
    string b;
    cin >> a >> b;
    if(b == "AC" && !(st.count(a))){
      st.insert(a);
      fail += f[a];
    }else{
      if(st.count(a)){
        continue;
      }else{
        f[a]++;
      }
    }
  }
  cout << st.size() << " " << fail << endl;
}
