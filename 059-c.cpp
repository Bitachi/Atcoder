#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main(){
   ll N;
   cin >> N;
   vector<ll> a(N);
   vector<ll> S(N, 0);
   rep(i, N){
     cin >> a[i];
   }
   int cnt = 0;
   if(a[0] > 0){
     for(int i = 1; i < N; i++){
       if(i % 2 != 0){
         if(a[i] >= -a[i-1]){
           a[i] += -(a[i] + 1);
           cnt += -(a[i] + 1);
         }
       }else{
         if(a[i] <= -a[i-1]){
           a[i] += -(a[i] + 1);
           cnt += -(a[i] + 1);
         }
       }
     }
   }
   cout << cnt << endl;
   return 0;
}
