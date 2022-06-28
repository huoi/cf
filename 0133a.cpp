#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

#define sz(n) ((int)n.size())

const int MAXN = 1e7;
const int MOD = 1e9 + 7;

bool check(char c)
{
    if (c == 'H') return true;
    if (c == 'Q') return true;
    if (c == '9') return true;
    return false;
}

void solve()
{
    string s;
    cin >> s;

    for (int i = 0; i < sz(s); ++i)
        if (check(s[i]))
            {cout << "YES"; return;}
    cout << "NO";
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
