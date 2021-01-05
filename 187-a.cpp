#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef pair<int, int> P;

int main(){
    int a, b;
    cin >> a >> b;
    int sa, sb; sa=0; sb=0;
    while(a >= 10){
        //sa = 0;
        sa += a % 10;
        a /= 10;
    }
    sa += a;
    while(b >= 10){
        //sb = 0;
        sb += b % 10;
        b /= 10;
    }
    sb+= b;
    cout << max(sa, sb) << endl;
}
