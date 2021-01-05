#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main(){
 int N;
 cin >> N;
 vector<int> a(N+1, 0);
 for(int i = 1; i < N; i++){
   int t;
   cin >> t;

     a[t]++;
  // }
 }

 for(int i = 1; i <= N; i++){
   cout << a[i] << endl;

 }
 return 0;
}
