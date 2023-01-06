
// ॐ सरस्वति नमस्तुभ्यं वरदे कामरूपिणि ।
// विद्यारम्भं करिष्यामि सिद्धिर्भवतु मे सदा ॐ॥


#include<bits/stdc++.h>
using namespace std;


// void swap(int *a, int *b){
// 	int temp = *a;
// 	*a = *b;
// 	*b= temp;
// }

void solve(){
	int p;
	cin>>p;
	int k;
	cin>>k;
	int arr[p];
	for(int i=0;i<p;i++){
		cin>>arr[i];
	}
	int count=0;
	// for(int i=1;i<=p;i++){
	// 	if(arr[i]!=i){
	// 		swap(&arr[arr[i]], &arr[i]); 
	// 		count++;
	// 	}else{
	// 		continue;
	// 	}
	// }
	// if(count<k){
	// 	cout<<1<<"\n";
	// 	return;
	// }
	for(int i=0;i<p;i++){
		if(arr[i]==count+1){
			count++;
		}
	}

	cout<<(p-count+k-1)/k<<"\n";
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
