#include<bits/stdc++.h>
using namespace std;
int main(){
  int N, X, Y;
  cin >> N >> X >> Y;
  int i, j;
  vector<int> K(N, 0);
  for(i=1; i<=N-1; i++){
    for(j=i+1; j<=N; j++){
      int r1 = j - i;
      int r2 = abs(Y-j) + 1 + abs(i-X);
      K[min(r1, r2)]++;
    }
  }
  for(i=1; i<N; i++){
    cout << K[i]<< endl;
  }
  return 0;
}
