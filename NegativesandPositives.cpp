#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long int n;
    cin >> n;
    long long int temp;
    long long int neg = 0, mn = INT_MAX, total = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp < 0)
            neg++;
        total += abs(temp);
        mn = min(mn,abs(temp));
    }
    if (neg == n)
    {
        if (n % 2 == 0)
        {
            cout << total;
        }
        else
            cout << total -2* mn;
    }
    else if (neg == 0)
        cout << total;
    else if (neg % 2 == 0)
    {
        cout << total;
    }
    else
        cout << total -2* mn;
    cout << "\n";
}
int main()
{


	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
    long long int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}