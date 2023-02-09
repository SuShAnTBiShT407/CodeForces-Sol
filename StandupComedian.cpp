
// ॐ सरस्वति नमस्तुभ्यं वरदे कामरूपिणि ।
// विद्यारम्भं करिष्यामि सिद्धिर्भवतु मे सदा ॐ॥


#include<bits/stdc++.h>
using namespace std;

void solve(){
	long long int a1, a2, a3, a4, ans=0;
	cin>>a1>>a2>>a3>>a4;
        
        if(a1==0){
            if(a2>0 || a3>0 || a4>0){
                cout<<"1\n";
            }else{
                cout<<"0\n";
            }
            return;
        }
        
        ans=a1;
        
        if(a2>a3){
            swap(a2, a3);
        }
        
        ans=ans+2*a2;
        
        a3=a3-a2;
        
        ans=ans+min(a1+1, a3+a4);
        
        cout<<ans<<"\n";


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
