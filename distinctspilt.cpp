
// ॐ सरस्वति नमस्तुभ्यं वरदे कामरूपिणि ।
// विद्यारम्भं करिष्यामि सिद्धिर्भवतु मे सदा ॐ॥


#include<bits/stdc++.h>
using namespace std;



void solve(){
	int n;
	string s;
	cin>>n>>s;
	set<int> st;
	vector<int> prefix(n, 0), suff(n, 0);
	for(int i=0;i<n;i++){
		st.insert(s[i]);
		prefix[i] = st.size();
	}
	st.clear();
	for(int i=n-1;i>=0;i--){
		st.insert(s[i]);
		suff[i] = st.size();
	}
	int max_val = 0;
	for(int i=0;i<n-1;i++){
		int temp = prefix[i]+suff[i+1];
		max_val = max(max_val, temp);
	}

	cout<<max_val<<"\n";
	return;
}

int main(){
	
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int tc;
	cin>>tc;
	while(tc--){
		solve();
	}
	return 0;
}



			//                             ----code by Sushant Bisht-----
