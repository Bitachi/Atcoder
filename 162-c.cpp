#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int gcd(int a, int b) {
    if (b==0) return a;
    else return gcd(b, a%b);
}

int ggg(int i, int j, int k){
  return gcd(gcd(i, j), k);
}

int main(){
  int N;
  cin >> N;
  int sum = 0;
  for(int i = 1; i <= N; i++){
    for(int j = 1; j <= N; j++){
      for(int k = 1; k <= N; k++){
        sum += ggg(i, j, k);
      }
    }
  }
  cout << sum << endl;
  return 0;
}
