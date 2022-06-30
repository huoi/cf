#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

#define sz(n) ((int)n.size())

const int MAXN = 1e7;
const int MOD = 1e9 + 7;

int n, k, a[200000];

void solve()
{
    cin >> n >> k;
    for (int i = 0; i < n; ++i) cin >> a[i];

    if (k == 1)
    {
        cout << (n-1)/2 << '\n';
        return;
    }
    int res = 0;
    for (int i = 1; i < n-1; ++i)
        if (a[i-1] + a[i+1] < a[i])
            ++res;
    cout << res << '\n';
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
