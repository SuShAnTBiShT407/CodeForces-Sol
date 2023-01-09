
// ॐ सरस्वति नमस्तुभ्यं वरदे कामरूपिणि ।
// विद्यारम्भं करिष्यामि सिद्धिर्भवतु मे सदा ॐ॥


#include<bits/stdc++.h>
using namespace std;



void solve(){
	int n;
	string s;
	cin>>n>>s;
	int prev = 0; int last=-1;
	int len=0;
	for(int i=0;i<n-1;i++){
		len++;
		if(s[i]-'0' == last){
			cout<<prev<<" ";
		}else{
			cout<<len<<" ";
			prev = len;
		}
		last = s[i]-'0';
	}
	cout<<"\n";
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
