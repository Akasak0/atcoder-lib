// Library : https://github.com/Akasak0/atcoder-lib //
// Reference : //
// - algo-method : https://algo-method.com
// - apg4b : https://atcoder.jp/contests/APG4b
// - atcoder admin (ABC464) : https://www.youtube.com/live/xccJ5hiizzY
// 
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
#define el '\n'
#define Yes cout << "Yes\n"
#define No cout << "No\n"
#define retYes Yes;\
    return
#define retNo No;\
    return
#define rep(i, s, n) for(int i = int(s); i < int(n); i++)
#define lrep(i, s, n) for(ll i = ll(s); i < ll(n); i++)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define unless(c) if(!(c))
const int inf = INT_MAX;
const ll INF = LLONG_MAX;

// ------------------関数--------------------

// 回転用関数 //
vector<string> rotate(vector<string> s) {
    int h = s.size(), w = s[0].size();
    vector<string> res(w, string(h, '.'));
    for(int i = 0;i < h; i++) {
        for(int j = 0; j < w; j++) {
            res[j][h-1-i] = s[i][j];
        }
    }
    return res;
}

// chmax //
template <typename T>
bool chmax(T &a, const T& b) {
    if(a < b) {
        a = b;
        return true;
    }
    return false;
}

// chmin //
template <typename T>
bool chmin(T &a, const T& b) {
    if(a > b) {
        a = b;
        return true;
    }
    return false;
}

// -----------------コード-------------------

void solve() {
    

    return ;
}

// ------------------------------------------

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();

    return 0;
}
