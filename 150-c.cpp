#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef pair<int, int> P;

int main(){
  int N;
  cin >> N;
  vector<int> array(N);
  vector<int> p(N);
  vector<int> q(N);
  rep(i, N){
    array[i] = i+1;
  }
  rep(i, N){
    cin >> p[i];
  }
  rep(i, N){
    cin >>  q[i];
  }
  bool aa, bb = true;
  int a, b;
  int cnt = 1;
  do{
    aa = true;
    bb = true;
    rep(i, N){
      if(array[i] != p[i]){
        aa = false;
      }
      if(array[i] != q[i]){
        bb = false;
      }
    }
    if(aa) a = cnt;
    if(bb) b = cnt;
    cnt++;
  }while(next_permutation(array.begin(), array.end()));
  cout << abs(a-b) << endl;
}
