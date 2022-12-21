/*#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; 
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        for (int j=i+1; j<n-1;j++){
            if (arr[i]<arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i=n; i>0;i--){
        cout<<" "<<i;
    }


}*/
/*#include<iostream>
using namespace std;
int main()
{
    int arr[50], i, elem, pos, n;
    cout<<"Enter the Size for Array: ";
    cin>>n;
    cout<<"Enter "<<n<<" Array Elements: ";
    for(i=0; i<n; i++)
        cin>>arr[i];
    cout<<"\nEnter Element to Insert: ";
    cin>>elem;
    cout<<"At What Position ? ";
    cin>>pos;
    for(i=n; i>=pos; i--)
        arr[i] = arr[i-1];
    arr[i] = elem;
    n++;
    cout<<"\nThe New Array is:\n";
    for(i=0; i<n; i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int arr[]= {1,2,3,4,5,6};
    int arr2[sizeof(arr)/sizeof(arr[0])];
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
    cin>>n;
    cout<<endl;
    for (int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        if(arr[i]==n){
            continue;
        }
        else{
            arr2[i] =arr[i];
        }
    }
    for(int i=0; i<sizeof(arr2)/sizeof(arr[0]); i++)
        cout<<arr2[i]<<"  ";
}