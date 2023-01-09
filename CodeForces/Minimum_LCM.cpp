
// ॐ सरस्वति नमस्तुभ्यं वरदे कामरूपिणि ।
// विद्यारम्भं करिष्यामि सिद्धिर्भवतु मे सदा ॐ॥


#include<bits/stdc++.h>
using namespace std;



void solve(){
	int n;
	cin>>n;
	// int a = 1;
	// int b = n-1;
	// int min_val = 1e5;
	// int x, y;
	// while(b>=a){
	// 	if(b%a==0){
	// 		min_val = min(b, min_val);
	// 		x = a;
	// 		y = b;
	// 	} 
	// 	else{
	// 		min_val = min(min_val, b*a);
	// 	} 
	// 	a++;
	// 	b--;
	// }
	// cout<<x<<" "<<y<<"\n";

     int a = 1;
     for(int i=2;i*i<=n;i++){
          if(n%i==0){
               a = n/i;
               break;
          }
     }
     cout<<a<<" "<<n-a<<endl;

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
