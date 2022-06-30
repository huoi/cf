#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

#define sz(n) ((int)n.size())

const int MAXN = 1e7;
const int MOD = 1e9 + 7;

int n, m, a[100000], b[100000], f[100001] = {0};

void solve()
{
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> a[i];
    cin >> m;
    for (int i = 0; i < m; ++i) cin >> b[i];

    for (int i = 0; i < n; ++i) f[a[i]] = i;

    ll res1 = 0, res2 = 0;
    for (int i = 0; i < m; ++i)
        res1 += (ll)f[b[i]]+1, res2 += (ll)n - f[b[i]];
    cout << res1 << ' ' << res2;
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
