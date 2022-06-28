#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

#define sz(n) ((int)n.size())

const int MAXN = 1e7;
const int MOD = 1e9 + 7;

int n, a[1000];

void solve()
{
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> a[i];

    int mn = a[0], mx = a[0], res = 0;
    for (int i = 1; i < n; ++i)
    {
        if (a[i] < mn) mn = a[i], ++res;
        if (a[i] > mx) mx = a[i], ++res;
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
