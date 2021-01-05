#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef pair<int, int> P;
int main(){
  int N;
  cin >> N;
  set<int> A;
  rep(i, N){
    int a;
    cin >> a;
    if(A.size() == i){
      A.insert(a);
    }else{
      cout << "NO" << endl;
      return 0;
    }
  }
  if(A.size() == N){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }

  return 0;
}
