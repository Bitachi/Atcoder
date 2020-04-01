//
//  142_b.cpp
//  Atcoder
//
//  Created by 高見 豪 on 2019/10/09.
//  Copyright © 2019年 高見 豪. All rights reserved.
//
#include <iostream>
#include <cmath>
#include<cfenv>
using namespace std;
int main() {
    // insert code here...
    int N, K;
    int *h;
    int l;
    int cnt = 0;
    int i = 0;
    cin >> N;
    cin >> K;
    h = new int[N];
    while(i < N){
        cin >> h[i];
        if (h[i] >= K) cnt++;
        i++;
    }
    cout << cnt << endl;
    
    
    return 0;
}
