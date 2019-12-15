#include<bits/stdc++.h>
using namespace std;

int main(void)
{

    int n;
    cin >> n;
    int arr[n];
    int i,j,k=1;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    j=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]<j)
        {
            j=arr[i];
            k=i+1;
        }
    }
    cout << k << endl;
    return 0;
}
