#include<bits/stdc++.h>
using namespace std;
int main(){
  int i, j, k;
  int A,B, C, X;
  cin >> A;
  cin >> B;
  cin >> C;
  cin >> X;
  int cnt = 0;
  for(i=0; i<=A; i++){
    for(j=0; j<=B; j++){
      for(k=0; k<=C; k++){
        if (i * 500 + j * 100 + k * 50 == X){
          cnt++;
        }
      }
    }
  }
  cout << cnt << endl;
  return 0;
}
