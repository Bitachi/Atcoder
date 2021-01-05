#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main(){
  int N, M;
  cin >> N;
  map<string, int> A;
  map<string, int> B;
  rep(i, N){
    string a;
    cin >> a;
    A[a] += 1;
  }
  cin >> M;
  rep(i, M){
    string b;
    cin >> b;
    B[b] += 1;
  }
  int max = -9999;
  for(auto x : A){
    string aa = x.first;
    int a = x.second;
    //auto iter = B.find(x.first);
    auto iter = B.find(aa);
    int b;
    if(iter != B.end()){
      b = iter->second;

    }else{
    b = 0;
    }
    if(max < a-b){
      max = a-b;
    }
    }
  if(max < 0) max = 0;
  cout << max << endl;
  return 0;
}
