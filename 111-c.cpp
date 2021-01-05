#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef pair<int, int> P;
//vector<int> a;

int main(){
vector<int> n1(100001, 0);
vector<int> n2(100001, 0);
int n;
cin >> n;
//a.resize(n+1);
int aa;
for(int i = 1; i <= n; i++){
  cin >> aa;
  if(i % 2 == 0){
    n2[aa]++;
  }else{
    n1[aa]++;
  }
}
int max1, max3 =  1;
int max2, max4 = 0;
int p, q, pp, qq;
rep(i, 100001){
if(n1[i] > max1){
  max1 = n1[i];
  p = i;
}else if(n1[i] > max2 && n1[i] <= max1){
  max2 = n1[i];
  pp = i;
}
if(n2[i] > max3){
  max3 = n2[i];
  q = i;
}else if(n2[i] > max4 && n2[i] <= max3){
  max4 = n2[i];
  qq = i;
}
}
if(p == pp){
  sort(n1.begin(), n1.end());
  max2 = n1[1];
}
if(q == qq){
  sort(n2.begin(), n2.end());
  max4 = n2[1];
}

if(p != q){
  cout << n - max1 - max3 << endl;
}else{
  int case1 = n - max1 - max4;
  int case2 = n - max2 - max3;
  int case3 = n - max2 - max4;
  int ans = min(case1, case2);
  ans  = min(ans, case3);
  cout << ans << endl;
}
return 0;

}
