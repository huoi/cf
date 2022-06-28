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
    int n;
    cin >> n;

    if (n % 2 != 0) {cout << -1; return;}
    int res[n];
    for (int i = 0; i < n; ++i)
        res[i] = i+1;
    for (int i = 1; i < n; i += 2)
        swap(res[i], res[i-1]);
    for (int i = 0; i < n; ++i)
        cout << res[i] << ' ';
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
