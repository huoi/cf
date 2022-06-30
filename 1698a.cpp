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

    for (int i = 0; i < n; ++i)
    {
        int x = a[0], start = 1;
        if (i == 0) x = a[1], start = 0;
        for (int j = start; j < n; ++j)
            if (j != i) x ^= a[j];
        if (a[i] == x) {cout << x << '\n'; return;}
    }
    cout << -1 << '\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // freopen("AAA.inp", "r", stdin);
    // freopen("AAA.out", "w", stdout);

    int t = 1;
    cin >> t;
    while (t--) solve();
    
    return 0;
}
