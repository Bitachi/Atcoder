#include<bits/stdc++.h>
using namespace std;
int main(){
  int N;
  cin >> N;
  vector<int> a(N);
  for(int i = 0; i < N; i++){
    cin >> a[i];
  }

  int cnt = 1;
  int flag, flaglag;
  if(N == 1){
    cout << 1 <<endl;
    return 0;
  }
  else if(a[1] - a[0] > 0){
    //add++;
    flag = 1;
  }else if(a[1] - a[0] < 0){
    //sub++;
    flag = -1;
  }else{
    flag = 0;
    flaglag = 0;
  }
  for(int i = 1; i < N-1; i++){
    if(flag == 1){
      if(a[i+1] - a[i] > 0){
        //add++;
        continue;
      }else if(a[i+1] == a[i]){
        flag = 2;
        flaglag = 1;
      }else{
        flag = 0;
        cnt++;
      }
    }else if(flag == -1){
      if(a[i+1] - a[i] < 0){
        //sub++;
        continue;
      }else if(a[i+1] == a[i]){
        flag = 2;
        flaglag = -1;
      }else{
        flag = 0;
        cnt++;
      }
    }else if(flag == 0){
      if(a[i+1] - a[i] > 0){
        flag = 1;
      }else if(a[i+1] - a[i] < 0){
        flag = -1;
      }else{
        flag = 0;
      }
    }else{
      if(a[i+1] - a[i] > 0 && flaglag == 1){
        //diff > 0, before_diff > 0
        flag = 1;
      }else if(a[i+1] - a[i] > 0 && flaglag == -1){
        flag = 0;
        cnt++;
      }else if(a[i+1] - a[i] < 0 && flaglag == -1){
        flag = -1;
      }else if(a[i+1] - a[i] < 0 && flaglag == 1){
        flag = 0;
        cnt++;
      }else{
        continue;
      }
    }
  }
  cout << cnt <<endl;
  return 0;
}
