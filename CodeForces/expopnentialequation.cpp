#include <bits/stdc++.h>
using namespace std;
void solve() {
    long long int n;
    cin>>n;
    if(n&1) cout<<"-1"<<"\n";
    else {
        cout<<1<<" "<<n/2<<"\n";
    }
    return;
}
int main()
{
    long long int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}