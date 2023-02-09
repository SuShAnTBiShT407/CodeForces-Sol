
// ॐ सरस्वति नमस्तुभ्यं वरदे कामरूपिणि ।
// विद्यारम्भं करिष्यामि सिद्धिर्भवतु मे सदा ॐ॥


#include<bits/stdc++.h>
using namespace std;



void solve(){
	int n, cost;
	cin>>n>>cost;
	vector<int> arr(n);
	long long int sum=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		arr[i] += i+1;
	}
	sort(arr.begin(), arr.end());
	for(int i=0;i<n;i++){
		sum+=arr[i];
		if(sum>cost){
			cout<<i<<"\n";
			return;
		}
	}
	cout<<n<<"\n";
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
