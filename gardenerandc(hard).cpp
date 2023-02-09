
	// ॐ सरस्वति नमस्तुभ्यं वरदे कामरूपिणि ।
	// विद्यारम्भं करिष्यामि सिद्धिर्भवतु मे सदा ॐ॥


	#include<bits/stdc++.h>
	using namespace std;
	// No approval necessary.


	void solve(){
		string s;
		cin>>s;
		long long int n=  s.size();
		if(s[0]==s[s.size()-1]){
			cout<<s[0]<<" ";
			for(int i=1;i<s.size()-1;i++){
				cout<<s[i];
			}
			cout<<" "<<s[s.size()-1];
			cout<<"\n"; return;
		}else{
			if(s[0]==s[1]){
				cout<<s[0]<<" ";
				cout<<s[1]<<" ";
				for(int i=2;i<n;i++){
					cout<<s[i];
				}
				cout<<"\n"; return;
			}
			else if(s[0]=='a'){
				cout<<s[0]<<" ";
				cout<<s[n-1]<<" ";
				for(int i=1;i<n-1;i++){
					cout<<s[i];
				}
				cout<<"\n";
				return;
			}else{
				cout<<s[0]<<" ";
				cout<<s[1]<<" ";
				for(int i=2;i<n;i++){
					cout<<s[i];
				}
				cout<<"\n";
			}
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
