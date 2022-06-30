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
    int a, b, c;
    cin >> a >> b >> c;

    int x = 1, y = 1, z = 1;
    for (int i = 1; i <= a; ++i)
    {
        if (a % i == 0)
        {
            int j = a / i;
            int k = b / i;
            if (i*j == a && i*k == b && j*k == c)
            {
                x = i;
                y = j;
                z = k;
                break;
            }
        }
    }
    cout << x*4 + y*4 + z*4;
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
