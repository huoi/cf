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
    int n, t;
    string s;
    cin >> n >> t >> s;

    while (t--)
        for (int i = 0; i < n-1; ++i)
            if (s[i] == 'B' && s[i+1] == 'G')
                {swap(s[i], s[i+1]); ++i;}
    cout << s;
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
