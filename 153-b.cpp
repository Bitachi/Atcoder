#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef pair<int, int> P;

int main(){
  int h, n;
  cin >> h >> n;
  vector<int> a(n);
  rep(i, n){
    int aa;
    cin >> aa;
    h = h -  aa;
  }
  if(h <= 0){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}
