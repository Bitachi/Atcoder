#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef pair<int, int> P;

int main(){
  int A, B, C, D;
  cin >> A >> B >> C>>D;
  while(1){
    C -= B;
    if(C <= 0){
      cout << "Yes" << endl;
      return 0;
    }
    A -= D;
    if(A <= 0){
      cout << "No" << endl;
      return 0;
    }
  }
}
