#include<bits/stdc++.h>
using namespace std;

int main(void)
{

    int V,n;
    cin >> V >> n;
    int arr[n],index,i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==V)
            index=i;
    }
    cout << index << endl;
    return 0;
}
