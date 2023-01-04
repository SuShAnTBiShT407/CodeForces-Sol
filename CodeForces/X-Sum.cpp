
// ॐ सरस्वति नमस्तुभ्यं वरदे कामरूपिणि ।
// विद्यारम्भं करिष्यामि सिद्धिर्भवतु मे सदा ॐ॥


#include<bits/stdc++.h>
using namespace std;


int max_val=0;

int recursion(int arr[200][200], int n, int m, int i, int j){
	// base case 
	if(i==n) return 0;
	if(j==m) return 0;
	if(i<0) return 0;
	if(j<0) return 0;
	
	// recursive case
	max_val = max(max_val, recursion(arr, n, m ,i+1, j+1)+ recursion(arr,n, m, i+1, j-1)+ recursion(arr, n, m, i-1, j+1)+ recursion(arr, n, m, i-1, j-1));
	return max_val;
}

void ans(int g[200][200], int n, int m){

    long long ans = 0;
    for (int r = 0; r < n; r++) {
      for (int c = 0; c < m; c++) {
        long long sum = 0;
        // up left (-1, -1)
        for (int i = 1; r - i >= 0 and c - i >= 0; i++) {
          sum += g[r - i][c - i];
        }
        // down right (+1, +1)
        for (int i = 1; r + i < n and c + i < m; i++) {
          sum += g[r + i][c + i];
        }
        // down left (+1, -1)
        for (int i = 1; r + i < n and c - i >= 0; i++) {
          sum += g[r + i][c - i];
        }
        // up right (-1, +1)
        for (int i = 1; r - i >= 0 and c + i < m; i++) {
          sum += g[r - i][c + i];
        }
        sum += g[r][c];
        ans = max(ans, sum);
      }
    }
    cout << ans << "\n";
  
}



void solve(){
	int n, m;
	cin>>n>>m;
	int arr[200][200];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}

	ans(arr, n, m);
	
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

