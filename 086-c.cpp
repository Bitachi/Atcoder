#include<bits/stdc++.h>
using namespace std;
int main(){
  int N;
  cin >> N;
  vector<int> t(N+1);
  t[0] = 0;
  vector<int> x(N+1);
  vector<int> y(N+1);
  x[0] = 0;
  y[0] = 0;
  for(int i = 1; i <= N; i++){
    cin >> t[i] >> x[i] >> y[i];
  }
  int dt, dl;
  for(int i = 1; i <= N; i++){
    dt = t[i] - t[i-1];
    dl = abs(x[i] - x[i-1]) + abs(y[i] - y[i-1]);
    if(dl > dt) {
      cout << "No" << endl;
      return 0;
    }else if((dt-dl) % 2 == 0){
      continue;
    }else{
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}
