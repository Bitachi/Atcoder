#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef pair<int, int> P;

int main(){
  int S, W;
  cin >> S >> W;
  if(W >= S){
    cout << "unsafe" << endl;
  }else{
    cout << "safe" << endl;
  }
}
