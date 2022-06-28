#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

#define sz(n) ((int)n.size())

const int MAXN = 1e7;
const int MOD = 1e9 + 7;

int a[3][3];
bool res[3][3] = {0};

void press(int r, int c)
{
    res[r][c] = !res[r][c];
    if (r+1 < 3) res[r+1][c] = !res[r+1][c];
    if (c+1 < 3) res[r][c+1] = !res[r][c+1];
    if (r-1 >= 0) res[r-1][c] = !res[r-1][c];
    if (c-1 >= 0) res[r][c-1] = !res[r][c-1];
}

void solve()
{
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            cin >> a[i][j];

    while (true)
    {
        bool done = 1;
        for (int i = 0; i < 3; ++i)
            for (int j = 0; j < 3; ++j)
                if (a[i][j] > 0)
                    {press(i, j); --a[i][j]; done = 0;}
        if (done) break;
    }

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
            cout << !res[i][j];
        cout << '\n';
    }
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
