#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

#define sz(n) ((int)n.size())

const int MAXN = 1e7;
const int MOD = 1e9 + 7;

bool isUpper(char c)
{
    return (c >= 'A' && c <= 'Z');
}

char fix(char c, bool upper)
{
    if (upper && !isUpper(c)) return c - 32;
    else if (!upper && isUpper(c)) return c + 32;
    return c;
}

void solve()
{
    string s;
    cin >> s;

    int lc = 0, uc = 0;
    for (int i = 0; i < sz(s); ++i)
        lc += !isUpper(s[i]), uc += isUpper(s[i]);

    bool upper = false;
    if (uc > lc) upper = true;

    for (int i = 0; i < sz(s); ++i)
        cout << fix(s[i], upper);
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
