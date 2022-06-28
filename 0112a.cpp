#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

#define sz(n) ((int)n.size())

const int MAXN = 1e7;
const int MOD = 1e9 + 7;

string fix(string s)
{
    for (int i = 0; i < sz(s); ++i)
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    return s;
}

void solve()
{
    string a, b;
    cin >> a >> b;

    a = fix(a), b = fix(b);
    if (a < b) cout << -1;
    else if (a > b) cout << 1;
    else cout << 0;
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
