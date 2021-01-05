#include<bits/stdc++.h>
using namespace std;
int main(){
  int N;
  cin >> N;
  vector<int> A(N);
  for(int i=0; i<N; i++){
    cin >> A[i];
  }
  int cnt = 0;
  while(1){
    bool flag = false;
    for(int i=0; i<N; i++){
      if(A[i] % 2 !=0){
        flag = true;
      }
    }
    if(!flag){
      cnt++;
      for(int i=0; i<N; i++){
        A[i] /= 2;
      }
    }else{
      cout << cnt << endl;
      return 0;
    }
  }
}
