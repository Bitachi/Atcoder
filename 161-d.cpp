#include<bits/stdc++.h>
using namespace std;
int main(){
  int K;
  cin >> K;
  vector<long long> q;
  if(K < 10){
    cout << K << endl;
    return 0;
  }else{
    for(int i=1; i<10; i++){
      q.push_back(i);
    }
    int cnt = 9;
    int k = 1;
    while(1){
      long long center =  q[k-1];
      k++;
      for(int i=-1; i<=1; i++){
        int j = center % 10 + i;
        //center = 654だったら、3, 4, 5
        if (j >= 0 && j <= 9){
          q.push_back(j + center*10);
          cnt++;
          if (cnt == K){
            cout << q[cnt-1] << endl;
            return 0;
          }
        }
      }
    }


  }
}
