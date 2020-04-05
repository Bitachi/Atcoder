#include<bits/stdc++.h>
using namespace std;
int main(){
  int K ,N;
  cin >> K >> N;
  vector<int> A(N+1);
  for(int i=0; i<N; i++){
    cin >> A[i];
  }
  A[N] = A[0] + K;
  int max = 0;
  for(int i=1; i< N+1; i++){
    if(max < A[i] - A[i-1]){
      max = A[i] - A[i-1];
    }
  }
  cout << K - max << endl;
  return 0;
}
