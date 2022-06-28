#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

#define sz(n) ((int)n.size())

const int MAXN = 1e7;
const int MOD = 1e9 + 7;

bool isPrime(int x)
{
    int m = sqrt(x);
    for (int i = 2; i <= m; ++i)
        if (x % i == 0)
            return false;
    return true;
}

void solve()
{
    int n, m;
    cin >> n >> m;

    do ++n; while (!isPrime(n));
    if (n == m) cout << "YES";
    else cout << "NO";
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
