#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef pair<int, int> P;

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
  int N, K, L;
  cin >> N >> K >> L;
  UnionFind way(N);
  UnionFind rail(N);
  int p, q;
  rep(i, K){
    cin >> p >> q;
    p--; q--;
    way.unite(p, q);
  }
  rep(i, L){
    cin >> p >> q;
    p--; q--;
    rail.unite(p, q);
  }
  map<P, int> cnt;
  rep(i, N){
    cnt[P(way.find(i), rail.find(i))]++;
  }
  rep(i, N){
    cout << cnt[P(way.find(i), rail.find(i))] << " ";
  }
  cout << endl;

}
