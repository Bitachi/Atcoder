#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main(){
  int N;
  set<int> a;
  cin >> N;
  int A;
  rep(i, N){
    cin >> A;
    if(a.count(A)){
      a.erase(A);
    }else{
      a.insert(A);
    }
  }
  //int ans = 0;
  //sort(a.begin(), a.end(), greater<int>());
  cout << a.size() << endl;
  return 0;
}
