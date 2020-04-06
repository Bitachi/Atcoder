#include<bits/stdc++.h>
using namespace std;
int main(){
  int N, Y;
  cin >> N >> Y;
  int x, y;
  for(x = 0; x <= 2000; x++){
    for(y = 0; y <= 2000; y++){
      if((-9000*x - 5000*y == Y - 10000*N) && x >= 0 && y >= 0 && (N - x - y) >= 0){
        cout << N - x - y<< ' ' << y << ' '<< x << endl;
        return 0;
      }
    }
  }
  cout << "-1 -1 -1" << endl;
  return 0;
}
