// Library : https://github.com/Akasak0/atcoder-lib //
// Reference : //
// - algo-method : https://algo-method.com
// - apg4b : https://atcoder.jp/contests/APG4b
// - atcoder admin (ABC464) : https://www.youtube.com/live/xccJ5hiizzY
// 
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unwaighted_Graph = vector<vector<int>>;
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

// Dijkstra //
// Ryo Suzuki氏「競プロのための標準C++」より「ダイクストラ法」を参照
// https://zenn.dev/reputeless/books/standard-cpp-for-competitive-programming/viewer/dijkstra //

// 辺の情報
struct Edge
{
	// 行先
	int to;

	// コスト
	int cost;
};

using Graph = std::vector<std::vector<Edge>>;

// { distance, from }
using Pair = std::pair<long long, int>;

// ダイクストラ法 (1.1 基本実装)
// O( (V + E) \log V)
// distances は頂点数と同じサイズ, 全要素 INF で初期化しておく
void Dijkstra(const Graph& graph, std::vector<long long>& distances, int startIndex)
{
	// 「現時点での最短距離, 頂点」の順に取り出す priority_queue
	// デフォルトの priority_queue は降順に取り出すため std::greater を使う
	std::priority_queue<Pair, std::vector<Pair>, std::greater<Pair>> q;
	q.emplace((distances[startIndex] = 0), startIndex);

	while (!q.empty())
	{
		const long long distance = q.top().first;
		const int from = q.top().second;
		q.pop();

		// 最短距離でなければ処理しない
		if (distances[from] < distance)
		{
			continue;
		}

		// 現在の頂点からの各辺について
		for (const auto& edge : graph[from])
		{
			// to までの新しい距離
			const long long d = (distances[from] + edge.cost);

			// d が現在の記録より小さければ更新
			if (d < distances[edge.to])
			{
				q.emplace((distances[edge.to] = d), edge.to);
			}
		}
	}
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
