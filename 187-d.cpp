#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
typedef pair<ll, ll> P;

int main(){
    ll n;
    cin >> n;
    ll sum_a = 0; 
    ll sum_b  =0;
    vector<ll> diff(n);
    rep(i, n){
        ll a, b;
        cin >> a >> b;

        sum_a+=a;
        diff[i] = 2*a  +b;
    }
    sort(diff.begin(), diff.end() ,greater<ll>{});
    ll ans = 0;

    rep(i, n){
        ans++;
        sum_b += diff[i];
        if(sum_b > sum_a){
            cout << ans << endl;
            return 0;
        }
    }
    return 0;
}
