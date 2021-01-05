#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
typedef pair<ll, ll> P;

int main(){
    ll n, w;
    cin >> n >> w;
    vector<ll> s(200000+10, 0);
    vector<ll> t(200000+10, 0);
    vector<ll> p(200000+10, 0);
    rep(i, n){
        int ss, tt, pp;
        cin >> ss >> tt >> pp;
        ss; tt;
        s[ss] += pp;
        t[tt] += pp;
    }
    ll now = 0;
    bool ok = true;
    rep(i, 200000+1){
        now += s[i];
        now -= t[i];
     //   cout << i  << ":" << now << endl;
        if(now > w){
             ok = false;
        }
    }
    if(ok){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}
