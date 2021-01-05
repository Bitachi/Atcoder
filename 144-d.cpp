#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef pair<int, int> P;


int main() {
  double a, b, x, theta;
  cin >> a >> b >> x;

  if (x > a * a * b / 2) {
    theta = atan(2 * (a * a * b - x) / (a * a * a));
  } else {
    theta = atan((a * b * b) / (2 * x));
  }

  double PI = 3.14159265358979;
  theta = theta * 180 / PI;
  cout << fixed << setprecision(10) << theta;
  cout << endl;
  return 0;
}
