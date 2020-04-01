//
//  main.cpp
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
    int N;
    cin >> N;
    cout << (double)(N - N/2) / (double)N << endl;
    return 0;
}
