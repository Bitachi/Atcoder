#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef pair<int, int> P;

int main(){
  int c[3][3];
  rep(i, 3){
    rep(j, 3){
      cin >> c[i][j];
    }
  }
  int a[3];
  int b[3];
  bool flag;
  rep(p, 101){
    rep(q, 101){
      rep(r, 101){
        flag = true;
        a[0] = p;
        a[1] = q;
        a[2] = r;
        b[0] = c[0][0] - a[0];
        b[1] = c[1][1] - a[1];
        b[2] = c[2][2] - a[2];
        rep(i, 3){
          rep(j, 3){
            if(c[i][j] != a[i] + b[j]){
              flag = false;
            }
          }
        }
        if(flag){ cout << "Yes" << endl;
        return 0;}
      }
    }
  }
  cout << "No" << endl;
}
