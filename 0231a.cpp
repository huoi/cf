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

    int res = 0;
    for (int i = 0; i < n; ++i)
    {
        bool a, b, c;
        cin >> a >> b >> c;

        int s = a + b + c;
        if (s >= 2) ++res;
    }
    cout << res;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    // cin >> t;
    while (t--) solve();
    
    return 0;
}
