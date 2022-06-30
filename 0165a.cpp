#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

#define sz(n) ((int)n.size())

const int MAXN = 1e7;
const int MOD = 1e9 + 7;

int m;
pair<int, int> a[200];

void solve()
{
    cin >> m;
    for (int i = 0; i < m; ++i) cin >> a[i].first >> a[i].second;

    int res = 0;
    for (int i = 0; i < m; ++i)
    {
        bool n, s, e, w;
        n = s = e = w = 0;
        for (int j = 0; j < m; ++j)
        {
            if (a[i].first < a[j].first && a[i].second == a[j].second)
                n = 1;
            if (a[i].first > a[j].first && a[i].second == a[j].second)
                s = 1;
            if (a[i].first == a[j].first && a[i].second < a[j].second)
                e = 1;
            if (a[i].first == a[j].first && a[i].second > a[j].second)
                w = 1;
        }
        if (n && s && e && w) ++res;
    }
    cout << res;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // freopen("AAA.inp", "r", stdin);
    // freopen("AAA.out", "w", stdout);

    int t = 1;
    // cin >> t;
    while (t--) solve();
    
    return 0;
}
