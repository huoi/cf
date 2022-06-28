#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

#define sz(n) ((int)n.size())

const int MAXN = 1e7;
const int MOD = 1e9 + 7;

void solve()
{
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    int res = d;
    for (int i = 1; i <= d; ++i)
    {
        if (i % k == 0) continue;
        if (i % l == 0) continue;
        if (i % m == 0) continue;
        if (i % n == 0) continue;
        --res;
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
