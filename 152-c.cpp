#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef pair<int, int> P;

int main(){
  int n;
  cin >> n;
  //vecotr<int> p(n);
  int min;
  cin >> min;
  int ans = 1;
  rep(i, n-1){
    int pp;
    cin >> pp;

    if(pp <= min){
      min = pp;
      ans++;
    }
  }
  cout << ans << endl;
}
