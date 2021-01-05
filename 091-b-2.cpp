#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef pair<int, int> P;
int main(){
  int N, M;
  cin >> N;
  map<string, int> A;
  rep(i, N){
    string a;
    cin >> a;
    A[a]++;
  }
  cin >> M;
  rep(i, M){
    string b;
    cin >> b;
    A[b]--;
  }
  int max = -9999;
  for (auto a : A){
        //std::cout << key << " => " << value << "\n";
        if(max < a.second){
          max = a.second;
        }
    }
    if(max >= 0){
      cout << max << endl;
    }else{
      cout << 0 << endl;
    }
    return 0;
}
