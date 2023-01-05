// ॐ सरस्वति नमस्तुभ्यं वरदे कामरूपिणि ।
// विद्यारम्भं करिष्यामि सिद्धिर्भवतु मे सदा ॐ॥


#include<bits/stdc++.h>
using namespace std;

void solve(){
	long long int n;
	cin>>n;
	long long int arr[n];
	int count=-1;
	long long int ans = 1;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	
		count++;
	}
	for(int i=0;i<n;i++){
		//cout<<ans<<" "<<arr[i]<<"\n";
		ans*=arr[i];
	}

	cout<<2022*(ans+count)<<"\n";
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