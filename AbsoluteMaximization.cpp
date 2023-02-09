
// ॐ सरस्वति नमस्तुभ्यं वरदे कामरूपिणि ।
// विद्यारम्भं करिष्यामि सिद्धिर्भवतु मे सदा ॐ॥


#include<bits/stdc++.h>
using namespace std;



// void solve(){
// 	int n;
// 	cin>>n;
// 	vector<int> arr;
// 	unordered_map<string, int> mp;
// 	int maX_val = -1;
// 	for(int i=0;i<n;i++){
// 		int val;
// 		cin>>val;
// 		arr.push_back(val);
// 		maX_val = max(maX_val, val);
// 	}

// 	string s = bitset<32>(maX_val).to_string();
// 	int count=0;
// 	for(int i=0;i<32;i++){
// 		if(s[i]=='0'){
// 			count++;
// 		}else{
// 			break;
// 		}
// 	}
// 	for(int i=0;i<n;i++){
// 		auto binary = bitset<32>(arr[i]).to_string().substr(count);
// 		mp[binary] = arr[i];
// 	}
// 	for(auto i:mp){
// 		cout<<i.first<<" "<<i.second<<"\n";
// 	}
// 	for(auto i:mp){
// 		// cout<<i.first<<" "<<i.second<<"\n";
// 		string s = i.first;
// 		int num = i.second;
// 		string s1 ="";
// 		for(int j=0;j<s.size();j++){
// 			if(s[j]=='0') s1+="1";
// 			else s1+="0";
// 		}
// 		if(mp.find(s1)==mp.end()){
// 			cout<<0<<"\n";
// 			return;
// 		}else{
			
// 			cout<<num+mp[s1]<<"\n";
// 			return;
// 		}
		
// 	}
// 	// for(int i=0;i<n;i++){
// 	// 	int first = mp[i].first;
// 	// 	if()
// 	// }

// }

void solve(){
		long long int n, max_val, min_val;
		cin>>n;
		long long int a[n];
        
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        max_val=min_val=a[0];
        
        for(int i=1; i<n; i++){
            max_val=max_val|a[i];
            min_val=min_val&a[i];
        }
        
        cout<<max_val-min_val<<"\n";
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
