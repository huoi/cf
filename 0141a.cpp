#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

#define sz(n) ((int)n.size())

const int MAXN = 1e7;
const int MOD = 1e9 + 7;

int a[26] = {0}, b[26] = {0};

void process(string s, int ar[])
{
    for (int i = 0; i < sz(s); ++i)
        ++ar[s[i] - 'A'];
}

void solve()
{
    string x, y, s;
    cin >> x >> y >> s;

    process(x, a);
    process(y, a);
    process(s, b);

    for (int i = 0; i < 26; ++i)
        if (a[i] != b[i])
            {cout << "NO"; return;}
    cout << "YES";
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
