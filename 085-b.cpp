#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    int d[110];
    cin >> N;
    for (int i = 0; i < N; ++i) cin >> d[i];

    set<int> values; // insert するときに重複を取り除いてくれます
    for (int i = 0; i < N; ++i) {
        values.insert(d[i]); // 挿入します
    }

    // set のサイズを出力します
    cout << values.size() << endl;
    return 0;
}
