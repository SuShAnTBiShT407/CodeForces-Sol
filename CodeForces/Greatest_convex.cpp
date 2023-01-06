
// ॐ सरस्वति नमस्तुभ्यं वरदे कामरूपिणि ।
// विद्यारम्भं करिष्यामि सिद्धिर्भवतु मे सदा ॐ॥


#include<bits/stdc++.h>
using namespace std;

// vector<int> memo;
// int factorial(int n){
// 	if(n==1 || n==0) return 1;
// 	if(memo[n]!=-1) return memo[n];
// 	return memo[n] = n*factorial(n-1);
// }

void solve(){

	int k;
	cin>>k;
	// memo.resize(k, -1);
	// int f = factorial(k-2);
	// if((((k-1)*f)+f)%k==0){
	// 	cout<<k-1<<"\n";
	// 	return;
	// }else{
	// 	cout<<-1<<"\n";
	// 	return;
	// }
	cout<<k-1<<"\n";
	
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
