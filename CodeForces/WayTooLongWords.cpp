#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int count = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        count = 0;
        cin >> s;
        if (s.size() > 10)
        {   
            string output;
            output += s[0];
            for (int j = 1; j < s.size() - 1; j++)
            {
                count += 1;
            }
            output += to_string(count);
            output += s[s.size() - 1];
            cout<< output<<endl;
        }
        else  cout << s<<endl;
    }
    return 0;
}