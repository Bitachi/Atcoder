#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef pair<int, int> P;

int main(){
    int n;
    cin >> n;
    vector<double> x(n); vector<double > y(n);

    rep(i, n) cin >> x[i] >> y[i];
    int ans = 0;
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j< n; j++){
            double r = (y[j] - y[i]) / (x[j] - x[i]);
            if(r <= 1 && r >= -1) ans++;
        }
    }
    cout << ans << endl;
}
