#include <bits/stdc++.h>
using namespace std;

int countToMake0lternate(const string& s)
{
	int result = 0;

	for (int i = 0; i < (s.length() - 1); i++)

		if (s[i] == s[i + 1])
			result++;
	return result;
}

int main()
{
	cout<<countToMake0lternate("AABAAB") << endl;
	cout<<countToMake0lternate("11111") << endl;
	cout<<countToMake0lternate("01010101") << endl;
	return 0;
}
