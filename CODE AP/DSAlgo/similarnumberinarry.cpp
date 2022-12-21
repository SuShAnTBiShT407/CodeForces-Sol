#include<bits/stdc++.h>
using namespace std; 


// void solve(vector<int> arr1, vector<int> arr2){

//     unordered_map<int, int> count;
//     int min = INT_MAX;
//     int index=0;
//     int n = arr1.size();
//     do{
//       for(int i =arr1[index];i<arr2[index];i++){
//         count[i] +=1; 
//         //cout<<i<<" ";
//       }
//       cout<<endl;
//       index++; 
//       unordered_map<int, int>::iterator itr;
//       for(auto itr=count.begin(); itr!=count.end(); itr++){
//         //cout<<"Key "<<itr->first<<"  value "<<itr->second<<endl;
//         if(itr->second==n){
//            //cout<<itr->first<<" ";
//            if(itr->first<min) min = itr->first;
//         }
//       }
//     }while(index!=n);
    
//     cout<<min;

// }

void solve(vector<int> arr1, vector<int> arr2){
    int n = arr1.size();
}

int main(){

    int n;
    cin>>n;
    vector<int> arr1;
    vector<int> arr2;
    for(int i =0;i<n;i++){
        int val;
        cin>>val;
        arr1.push_back(val);
    }
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        arr2.push_back(val);
    }
    solve(arr1, arr2);
}