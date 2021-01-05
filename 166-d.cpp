#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef pair<int, int> P;

int main(){
  int x;
  cin >> x;
  for(int i = 1; i*i*i <= x; i++){
    for(int j = i-1; j >= -(i-1); j--){
      if(i*i*i*i*i - j*j*j*j*j == x){
        cout << i << " " << j << endl;
        return 0;
      }
    }
  }
}
