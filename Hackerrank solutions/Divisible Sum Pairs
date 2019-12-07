#include<bits/stdc++.h>
using namespace std;

int main(void)
{

    int n,i,j,k,count=0;
    cin >> n >> k;
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((ar[i]+ar[j])%k==0)
                count++;
        }
    }
    cout << count << endl;
    return 0;
}
