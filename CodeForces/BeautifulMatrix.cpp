#include<bits/stdc++.h>
using namespace std;

int main(){
    int r=5;
    int c=5;
    int matrix[r][c];
    int val;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>matrix[i][j];
            if(matrix[i][j]==1){
                val = abs(i-2) + abs(j-2);
            }
        }
    }
    cout<<val<<endl;
    return 0;
}