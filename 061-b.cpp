#include<bits/stdc++.h>
using namespace std;
int main(){
  int N, M;
  cin >> N >> M;
  vector<int> A(N, 0);
  int a, b;
  for(int i = 0; i < M; i++){
    cin >> a >> b;
    A[a-1]++;
    A[b-1]++;
  }
  for(int i = 0; i < N; i++){
    cout << A[i] << endl;
  }
  return 0;
}
