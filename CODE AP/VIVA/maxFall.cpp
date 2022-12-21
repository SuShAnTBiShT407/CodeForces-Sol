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

int dp[505][505];

int solve(int currRow, int currCol)
{
    if (currCol < 0 or currCol >= mat[0].size())
        return INT_MIN;
    if (currRow == mat.size() - 1)
    {
        return dp[currRow][currCol] = mat[currRow][currCol];
    }

    if (dp[currRow][currCol] != -1)
        return dp[currRow][currCol];

    int down = solve(currRow + 1, currCol);
    int dLeft = solve(currRow + 1, currCol - 1);
    int dRight = solve(currRow + 1, currCol + 1);

    return dp[currRow][currCol] = mat[currRow][currCol] + max(down, max(dLeft, dRight));
}

int main()
{
    IOS;

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    clock_t startTime = clock();

    int ans = INT_MIN;

    memset(dp, -1, sizeof dp);

    for (int col = 0; col < mat[0].size(); col++)
    {
        int localAns = solve(0, col);
        // deb(localAns);
        ans = max(ans, localAns);
    }

    cout << ans << endl;

    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[0].size(); j++)
        {
            cout << dp[i][j] << "  ";
        }
        cout << endl;
    }

    int table[505][505];

    for (int currRow = mat.size() - 1; currRow >= 0; currRow--)
    {
        for (int currCol = 0; currCol < mat[0].size(); currCol++)
        {
            if (currRow == mat.size() - 1)
            {
                table[currRow][currCol] = mat[currRow][currCol];
            }
            else if (currCol == 0)
            {
                table[currRow][currCol] = mat[currRow][currCol] + max(table[currRow + 1][currCol], table[currRow + 1][currCol + 1]);
            }
            else if (currCol == mat[0].size() - 1)
            {
                table[currRow][currCol] = mat[currRow][currCol] + max(table[currRow + 1][currCol - 1], table[currRow + 1][currCol]);
            }
            else
            {
                table[currRow][currCol] = mat[currRow][currCol] + max(table[currRow + 1][currCol], max(table[currRow + 1][currCol - 1], table[currRow + 1][currCol + 1]));
            }
        }
    }

    cout << "-------------\n";

    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[0].size(); j++)
        {
            cout << table[i][j] << "  ";
        }
        cout << endl;
    }

    cerr << endl
         << setprecision(20) << double(clock() - startTime) / (double)CLOCKS_PER_SEC << " seconds." << endl;

} // Goodbye...