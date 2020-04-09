#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int digit(ll A){
  int a = 0;
  while(A  != 0){
    a++;
    A /= 10;
  }

  return a;
}

int main(){
  ll N;
  cin >> N;
  int N1 =  floor(sqrt(N));
  int min = digit(N);
  for(ll i = 1LL; i <= N1; ++i){
    if((N % i) == 0){
      ll B = N / i;
      int f = max(digit(i), digit(B));
    //  cout << f << " " << digit(i) << " "<< digit(B) << endl;
      if(min > f){
        min = f;
      //  cout << f << endl;
      }
    }else{
      continue;
    }
  }

  cout << min << endl;
  return 0;
}
