#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    long long int arr[n][n],diagsum=0,ldiagsum=0;

    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%lld",&arr[i][j]);

        }

    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
                diagsum+=arr[i][j];

        }

    }
    for(i=0;i<n;i++)
    {
        ldiagsum+=arr[i][n-1-i];
    }
    cout << abs(diagsum-ldiagsum) << endl;

    return 0;
}
