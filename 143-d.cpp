#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef pair<int, int> P;

vector<int> L;
int N;

int tri(int minus, int plus){
  int left = 0;
  int right = N+1;
  int mid;
  while(right -left > 1){
    mid = (right + left)/2;
    if(L[mid] < minus){
      left = mid;
    }else{
      right = mid;
    }
  }
  int min = left;
  left = 0;
  right = N+1;
  while(right -left > 1){
    mid = (right + left)/2;
    if(L[mid] < plus){
      left = mid;
    }else{
      right = mid;
    }
  }
  int max = left;
  return max - min + 1;
}

int main()
{
  cin >> N;
  L.resize(N);
  rep(i, N){
    cin >> L[i];
  }
  sort(L.begin(), L.end());
  int minus, plus;
  int ans = 0;
  for(int a =0; a < N-1; a++){
    for(int b = a+1; b < N; b++){
      minus = abs(a-b);
      plus = a+b;
      ans += tri(minus, plus);
    }
  }
  cout << ans << endl;
}
