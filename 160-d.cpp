#include<bits/stdc++.h>
using namespace std;

struct UnionFind {
  vector<int> par; //親の番号
  UnionFind(int n) : par(n, -1) { }
  int find(int x){ //親の番号を求める
    if(par[x] < 0) return x; //負なら親
    return find(par[x]); //xの親を参照
  }
  bool unite(int x, int y){
    int px = find(x); //xの親
    int py = find(y); //yの親
    if( px == py) return false; //すでに繋がっている
    if(par[px] > par[py]) swap(px, py); //xの方が小さくしたい
    par[px] += par[py];
    par[py] = px;
    return true;
  }
  bool same(int x, int y){
    return find(x) == find(y);
  }
  int size(int x){
    return -par[find(x)];
  }
};

int main(){
  int N, X, Y;
  cin >> N >> X >> Y;
  int i, j;
  UnionFind tree(N);
  vector<set<int> > dame(N);

  rep(i, M){
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    dame[a].insert(b);
    dame[b].insert(a);
    tree.unite(a, b);
  }
  rep(i, K){
    int c, d;
    cin >> c >> d;
    d--;
    c--;
    if(!tree.unite(c, d)) continue; //同じグループにあるもののみ
    dame[c].insert(d);
    dame[d].insert(c);
  }
  rep(i, N){
    int num = tree.size(i) - 1;
    num -= dame[i].size();
    cout << num << " ";
  }
  cout << endl;
}
