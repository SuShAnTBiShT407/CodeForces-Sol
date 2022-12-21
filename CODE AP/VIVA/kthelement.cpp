// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;
int Kth_smallest(map<int, int> m, int k)
{
	int freq = 0;
	for (auto it = m.begin(); it != m.end(); it++) {
		cout<<it->first;
		freq += (it->second); // adding the frequencies of
							// each element
							cout<<it->second<<" ";
		if (freq >= k) // if at any point frequency becomes
					// greater than or equal to k then
					// return that element
		{
			return it->first;
		}
	}
	return -1; // returning -1 if k>size of the array which
			// is an impossible scenario
}
int main()
{
	int n, k;
	cout<<"Enter the size of array : ";
	cin>>n;
	int arr[n];
	cout<<"\nEnter the Element in array\n";
	for (int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"\n Enter the value of k : ";
	cin>>k;
	cout<<"\n-------------------------------------------\n";
	map<int, int> m;
	for (int i = 0; i < n; i++) {
		m[arr[i]] += 1; 
	}
	int ans = Kth_smallest(m, k);
if(k==1){
	cout << "The " << k << "st smallest element is " << ans
		<< endl;
}
else if(k==2){
	cout << "The " << k << "nd smallest element is " << ans
		<< endl;
}
else if(k==3){
	cout << "The " << k << "rd smallest element is " << ans
		<< endl;
}
else{
	cout << "The " << k << "th smallest element is " << ans
		<< endl;
}
	return 0;
}
