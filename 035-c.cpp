#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
typedef pair<ll, ll> P;

int main(){
    ll n, q;
    cin >> n >> q;
    vector<bool> l(200020, 0);
    vector<bool> r(200020, 0);
    rep(i, q){
        int l1, r1;
        cin >> l1 >> r1; l1--;
        l[l1] = !l[l1]; r[r1] = !r[r1];
    }
    vector<bool> ans(n, 0);
    bool now = false;
    for(int i = 0; i < n; i++){

        now ^= l[i] ^ r[i];
        ans[i] = now;
    }
    rep(i, n) cout << ans[i];
    cout << endl;
}
