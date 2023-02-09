#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long int n;
    cin >> n;
    queue<pair<long long int, long long int>> q1, q2;
    long long int ans = 0;
    for (int i = 2; i * i <= n; i++)
    {
        if ((n % i) == 0)
        {
            int c = 0;
            int f = i;

            while ((n % i) == 0)
            {
                n /= i;
                c++;
            }

            q1.push({i, c});
        }
    }
    if (n > 1)
    {
        q1.push({n, 1});
    }

    while (q1.empty() == false)
    {

        long long int sum = 1;

        while (q1.empty() == false)
        {
            sum = (sum * q1.front().first);

            if (q1.front().second > 1)
            {
                q2.push({q1.front().first, q1.front().second - 1});
            }
            q1.pop();
        }
        ans = ans + sum;
        while (q2.empty() == false)
        {
            q1.push(q2.front());
            q2.pop();
        }
    }

    cout << ans << "\n";
}

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        solve();
    }
    return 0;
}