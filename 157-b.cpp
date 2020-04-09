#include<bits/stdc++.h>
using namespace std;
int main(){
  int a[3][3];
  for(int i =0; i<3; i++){
    for(int j = 0; j < 3; j++){
      cin >> a[i][j];
    }
  }
  int N;
  cin >> N;
  vector<int> b(N);
  for(int i = 0; i < N; i++){
    cin >> b[i];
  }
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      for(int k = 0; k < N; k++){
        if(a[i][j] == b[k]){
          a[i][j] = 0;
          //b.erase(b.begin() + k);
          //N -= 1;
        }
      }
    }
  }
  //tate
  int sum = 0;
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      sum += a[i][j];
    }
    if(sum == 0){
      cout << "Yes" << endl;
      return 0;
    }
    sum = 0;
  }

  //yoko
  sum = 0;
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      sum += a[j][i];
    }
    if(sum == 0){
      cout << "Yes" << endl;
      return 0;
    }
    sum = 0;
  }

  //naname
  sum = 0;
  for(int i = 0; i < 3; i++){
    sum += a[i][i];
  }
  if(sum == 0){
    cout << "Yes" << endl;
    return 0;
  }
  sum = 0;
  for(int i = 0; i < 3; i++){
    sum += a[i][2-i];
  }
  if(sum == 0){
    cout << "Yes" << endl;
    return 0;
  }

  cout << "No" << endl;
  return 0;
}
