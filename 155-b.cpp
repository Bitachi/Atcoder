#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main(){
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i, N){
//    cin >> A[i];
  int a ;
  cin >> a;
  if(a % 2 == 0)
{
  if(a % 3 != 0 && a % 5 != 0){
    cout << "DENIED" << endl;
    return 0;
  }
}
  }
cout << "APPROVED" << endl;
return 0;
}
