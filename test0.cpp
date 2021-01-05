#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int v[8] = {1, 2, 3,4,5,6,7,8};
  int N = 8;
  for(int bit = 0; bit < (1 << N); bit++){
    for(int i = 0; i < N; i++){
      if(bit & (1 << i)){
        cout << v[i] << " ";   
      }

    }
    cout << endl;
  }
}
