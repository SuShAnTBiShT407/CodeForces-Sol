#include <bits/stdc++.h>
using namespace std;

void fnTopological(int a[][10], int n);
int main(void)
{
    int n;
    int i, j;
    cout << "Topological Sorting Algorithm -\n";
    cout << "\nEnter the number of vertices : ";
    cin >> n;
    int a[n][n];
    cout << "Enter the adjacency matrix -\n";
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            cin>>a[i][j];
    fnTopological(a, n);
    cout<<'\n';
    return 0;
}
void fnTopological(int a[][10], int n)
{
    int in[n], out[n], stack[n], top = -1;
    int i, j, k = 0;
    for (i = 0; i < n; i++)
    {
        in[i] = 0;
        for (j = 0; j < n; j++)
            if (a[j][i] == 1)
                in[i]++;
    }
    while (1)
    {
        for (i = 0; i < n; i++)
        {
            if (in[i] == 0)
            {
                stack[++top] = i;
                in[i] = -1;
            }
        }
        if (top == -1)
            break;
        out[k] = stack[top--];
        for (i = 0; i < n; i++)
        {
            if (a[out[k]][i] == 1)
                in[i]--;
        }
        k++;
    }
    cout<<"Topological Sorting  is:- \n";
    for (i = 0; i < k; i++)
        cout<<out[i] + 1;
}