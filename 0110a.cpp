#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

#define sz(n) ((int)n.size())

const int MAXN = 1e7;
const int MOD = 1e9 + 7;

bool lucky(int n)
{
    return (n == 4 || n == 7);
}

int sum(ll n)
{
    int s = 0;
    while (n > 0)
        s += lucky(n%10), n /= 10;
    return s;
}

bool check(int n)
{
    if (n == 0) return false;
    while (n > 0)
    {
        if (!lucky(n%10))
            return false;
        n /= 10;
    }
    return true;
}

void solve()
{
    ll n;
    cin >> n;

    if (check(sum(n))) cout << "YES";
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
