#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef pair<int, int> P;




int main(){
  int n, k;
  cin >> n >> k;
  vector<int> x(n, 0);
  set<int> st;
  rep(i, k){
    int d;
    cin >> d;
    rep(j, d){

      int a;
      cin >> a;
      st.insert(a);
    }
  }
  cout << n - st.size() << endl;
}
