#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main(){
  vector<int> a(3);
  rep(i, 3) cin >> a[i];
  sort(a.begin(), a.end());
  int min, mid, max;
  min = a[0];
  mid = a[1];
  max = a[2];
  int cnt = 0;
  cnt = max - mid;
  min += cnt;
  mid += cnt;
  if((max % 2) == (min % 2)){
    cnt += (max-min)/2;
  }else{
    cnt += ((max+1) - min)/2 + 1;
  }
  cout << cnt << endl;
  return 0;
}
