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
    string s;
    cin >> s;

    s += '@';
    string res;
    for (int i = 0; i < sz(s)-1; ++i)
    {
        if (s[i] == '.') res += '0';
        else
        {
            if (s[i] == s[i+1]) res += '2';
            else res += '1';
            ++i;
        }
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
