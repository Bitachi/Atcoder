#include<bits/stdc++.h>
using namespace std;
int main(){
  int N, A, B;
  cin >> N >> A >> B;
  int a, b, c, d, x;
  int sum = 0;
  for (int i = 1; i <= N; i++){
    x = i;
    a = x / pow(10, 4); x = a % pow(10, 4);
    b = x / pow(10, 3); x = b % pow(10, 3);
    c = x / pow(10, 2); x = c % pow(10, 3);
    d = x / pow(10, 1); x = d % pow(10, 1);
    int total = a + b + c + d + x;
    if(total >= A && total <= B){
      sum += i;
    }
  }
  cout << sum << endl;
  return 0;
}
