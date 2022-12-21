// AnkitCode99 here....
// every ups and downs matter!

#include <bits/stdc++.h>
#define endl "\n"
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(nullptr);             \
    cout.tie(nullptr)
typedef long long int ll;
#define rep(i, a, b) for (ll i = a; i < b; i++)
#define pb push_back
#define deb(x) cout << #x << " - " << x << '\n'

using namespace std;

const ll sz = 1e5 + 5;
const ll szz = 1e6 + 6;
const ll mod = 1e9 + 7;

vector<vector<int>> mat = {{1, 2, 7, 3, 5}, {18, 100, 10, 8, 4}, {27, 9, 3, 6, 8}, {18, 12, 16, 17, 23}};

int dp[505][205][205];

int solve(int i, int j1, int j2)
{
    if (j1 < 0 or j1 >= mat[0].size() or j2 < 0 or j2 >= mat[0].size())
    {
        return INT_MIN;
    }

    if (i == mat.size() - 1)
    {
        if (j1 == j2)
        {
            return dp[i][j1][j2] = mat[i][j1];
        }
        else
        {
            return dp[i][j1][j2] = mat[i][j1] + mat[i][j2];
        }
    }

    if (dp[i][j1][j2] != -1)
        return dp[i][j1][j2];

    int ans = INT_MIN;
    int maxi = INT_MIN;
    for (int a = -1; a <= 1; a++)
    {
        for (int b = -1; b <= 1; b++)
        {
            if (j1 == j2)
            {
                ans = mat[i][j1] + solve(i + 1, j1 + a, j2 + b);
            }
            else
            {
                ans = mat[i][j1] + mat[i][j2] + solve(i + 1, j1 + a, j2 + b);
            }
            maxi = max(ans, maxi);
        }
    }

    return dp[i][j1][j2] = maxi;
}

int main()
{
    IOS;

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    clock_t startTime = clock();

    memset(dp, -1, sizeof dp);

    cout << solve(0, 0, mat[0].size() - 1);

    cerr << endl
         << setprecision(20) << double(clock() - startTime) / (double)CLOCKS_PER_SEC << " seconds." << endl;

} // Goodbye...