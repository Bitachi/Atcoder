#include<bits/stdc++.h>
using namespace std;
int main(){
  int N, A, B;
  cin >> N >> A >> B;
  int a, b, c, d, x;
  int sum = 0;
  for (int i = 1; i <= N; i++){
    x = i;
    a = x / 10000;
    x = x % 10000;
    b = x / 1000;
    x = x % 1000;
    c = x / 100;
    x = x % 100;
    d = x / 10;
    x = x % 10;
    int total = a + b + c + d + x;
    if(total >= A && total <= B){
      sum += i;
    }
  }
  cout << sum << endl;
  return 0;
}
