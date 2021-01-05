#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef pair<int, int> P;


int main(){
    ll n, k;
    cin >> k;
    queue<ll> q;
    if(n <= 12){
        cout << k << endl;
        return 0;
    }else{
        for(ll i = 1; i <= 9; i++){
            q.push(i);
        }
        ll cnt = 9LL;
        ll ans;
        while(1){
            ll center = q.front(); q.pop();
            ll l = center * 10;
            ll r = center % 10;
            center = l + r; //centerの桁数をあげる
            cout << center << endl;
            for(int i = -1; i <= 1; i++){
                if(i + r <= 0 || i + r >= 10){
                    continue;
                }
                else{
                     q.push(center + i); cnt++;
                     if(cnt == k){
                         ans = center + i;
                         cout << ans << endl;
                         return 0;
                    }
                }
            }

        }
    }
}
