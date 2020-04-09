#include<bits/stdc++.h>
using namespace std;
int main(){
  int c[3][3];
  int i, j, k;
  for(i=0; i<3; i++){
    cin >> c[i][0] >> c[i][1] >> c[i][2];
  }
  int a[3];
  int b[3];
  int ab12, ab13, ab23, ab21, ab32, ab31;
  for(i=0; i<=100; i++){
    a[0] = i;
    b[0] = c[0][0] - a[0];
    for(j=0; j<=100; j++){
      a[1] = j;
      b[1] = c[1][1] - a[1];
      for(k=0; k<=100;k++){
        a[2] = k;
        b[2] = c[2][2] - a[2];
        ab12 = a[0] + b[1];
        ab21 = a[1] + b[0];
        ab13 = a[0] + b[2];
        ab31 = a[2] + b[0];
        ab23 = a[1] + b[2];
        ab32 = a[2] + b[1];
        if(ab12 == c[0][1] && ab21 == c[1][0] &&
           ab13 == c[0][2] && ab31 == c[2][0] &&
           ab23 == c[1][2] && ab32 == c[2][1]){
             cout <<"Yes" << endl;
             return 0;
           }
      }
    }
  }
  cout << "No" << endl;
  return 0;
}
