#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef pair<int, int> P;

int main(){
  int a, b;
  cin >> a >> b;
  if(a > 9 || b > 9){
    cout << -1 << endl;
  }else{
    cout << a*b << endl;
  }
}
