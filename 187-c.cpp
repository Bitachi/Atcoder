#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef pair<int, int> P;

int main(){
    int n;
    cin >> n;
    set<string> s1, s2;
    bool flag = false;
    vector<string> ans;
    rep(i, n){
        string s;
        cin >> s;
        if(s[0]== '!'){
            s = s.erase(0,1);
            s2.insert(s);
            auto exists = s1.find(s);
            if(exists != s1.end()){
                flag = true;
                if(ans.size() == 0){
                    ans.push_back(s);
                }
            }
        }else{
            s1.insert(s);
            auto exists = s2.find(s);
            if(exists != s2.end()){
                flag = true;
                if(ans.size() == 0){
                    ans.push_back(s);
                }
            }
        }
    }
    if(flag){
        cout << ans[0] << endl;
    }else{
        cout << "satisfiable" << endl;
    }
    return 0;
}
