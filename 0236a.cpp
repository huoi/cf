#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

#define sz(n) ((int)n.size())

const int MAXN = 1e7;
const int MOD = 1e9 + 7;

bool f[26] = {0};

void solve()
{
    string s;
    cin >> s;

    int cnt = 0;
    for (int i = 0; i < sz(s); ++i)
        if (f[s[i] - 'a'] == 0)
            ++cnt, f[s[i] - 'a'] = 1;

    if (cnt % 2 == 0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";
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
