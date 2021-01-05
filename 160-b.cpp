#include<bits/stdc++.h>
using namespace std;
int main(){
  int X;
  cin >> X;
  int a,r, b = 0;
  a = float(X / 500);
  r = X % 500;
  b = float(r / 5);
  cout << a * 1000 + 5 * b << endl;
  return 0;
}
