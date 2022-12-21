#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = { 12, 3, 5, 7, 19 };
	int N = sizeof(arr) / sizeof(arr[0]);
	cout<<"Elements in Array :  \n";
	set<int> s(arr, arr + N);
	set<int>::iterator itr = s.begin();
	
	while(itr!=s.end()){
		cout<<*itr<<" ";
		itr++;
	}

	int K;
	cout<<"\n Enter the Kth smallest number to find : ";
	cin>>K;

	cout<<"\n The Kth smallest value in the array is";
	itr = s.begin();
	advance(itr, K - 1); 
	cout << *itr << "\n";

	return 0;
}
