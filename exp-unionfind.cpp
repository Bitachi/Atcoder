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
  //x, x + N. x + 2*Nをそれぞれx-A, x-B, x-Cの要素とする
  int N, K;
  cin >> N >> K;
  UnionFind uf(3*N);
  //vector<int> T(K);
  int x, y, t;
  int ans = 0;
  rep(i, K){
    cin >> t >> x >> y;
    x--; y--;
    if(x < 0 || x > N || y < 0 || y > N){
      //体裁を満たさない情報
      ans++;
      continue;
    }
    if(t == 1){
      //type1 : x and y is same
      if(uf.same(x, y+N) || uf.same(x, y+2*N)){
        ans++;
      }else{
        uf.unite(x, y);
        uf.unite(x+N, y+N);
        uf.unite(x+2*N, y+2*N);
      }
    }
    else{
      //type2 : x eats y
      if(uf.same(x, y) || uf.same(x, y+2*N)){
        ans++;
      }else{
        uf.unite(x, y+N);
        uf.unite(x+N, y+2*N);
        uf.unite(x+2*N, y);
      }
    }
  }
  cout << ans << endl;
}
