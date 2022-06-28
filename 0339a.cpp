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

    vector<int> v;
    for (int i = 0; i < sz(s); i += 2)
        v.push_back(s[i] - '0');
        
    sort(v.begin(), v.end());
    for (int i = 0; i < sz(v)-1; ++i)
        cout << v[i] << '+';
    cout << v[sz(v)-1];
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
