#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

#define sz(n) ((int)n.size())

const int MAXN = 1e7;
const int MOD = 1e9 + 7;

int n, a[100];

void solve()
{
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> a[i];

    int s = 0;
    for (int i = 0; i < n; ++i) s += a[i];
    
    int res = 0;
    for (int k = 1; k <= 5; ++k)
        if ((s+k-1) % (n+1) != 0)
            ++res;
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
