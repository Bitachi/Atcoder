#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef pair<int, int> P;
int main(){
  int N;
  cin >> N;
  map<string, int> A;
  int max = -9999;
  rep(i, N){
    string a;
    cin >> a;
    A[a]++;
    if(A[a] > max){
      max = A[a];
    }
  }
  //最大値をとる文字列を抽出
  vector<string> S;
  for(auto a : A){
    if(a.second == max){
      S.push_back(a.first);
    }
  }
  sort(S.begin(), S.end());
  rep(i, S.size()){
    cout << S[i] << endl;
  }
  return 0;
}
