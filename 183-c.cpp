#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
typedef pair<ll, ll> P;

int main(){
    ll T[9][9];
    int n, k;
    cin >> n >> k;
    rep(i, n){
        rep(j, n){
            cin >> T[i][j];  //iからjに行くときにかかるコスト
        }
    }
    vector<int> a(n);
    rep(i, n){
        a[i] = i;
    }
    int ans = 0;
    do{
        if(a[0] != 0){
            continue;
        }
        int sum = 0;
        for(int i = 1; i < n; i++){
            sum += T[a[i-1]][a[i]];
        }
        sum += T[a[n-1]][0];
        if(sum == k) ans++;
    }while(next_permutation(a.begin(), a.end()));
    cout << ans << endl;
}
