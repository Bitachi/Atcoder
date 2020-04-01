//
//  142_c.cpp
//  Atcoder
//
//  Created by 高見 豪 on 2019/10/09.
//  Copyright © 2019年 高見 豪. All rights reserved.
//
#include <iostream>

using namespace std;
int main() {
    // insert code here..
    int N, i;
    int *h, *r;
    cin >> N;
    h = new int[N];
    for(i=0; i<N; i++){
        cin >> h[i];
    }
    r = new int[N];
    for(i=0; i<N; i++){
        r[h[i]-1] = i+1;
    }
    for(i=0; i<N; i++){
        cout << r[i];
    }
    cout << endl;
    return 0;
}
