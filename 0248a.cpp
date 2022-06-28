#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

#define sz(n) ((int)n.size())

const int MAXN = 1e7;
const int MOD = 1e9 + 7;

int n, l[10000], r[10000];

int calc(int a[])
{
    int zc = 0, oc = 0;
    for (int i = 0; i < n; ++i)
        zc += !a[i], oc += a[i];
    return min(zc, oc);
}

void solve()
{
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> l[i] >> r[i];

    cout << calc(l) + calc(r);
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
