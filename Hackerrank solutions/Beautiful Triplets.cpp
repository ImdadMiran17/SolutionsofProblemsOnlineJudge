#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    long long n,d,guntasi=0;
    cin >> n >> d;
    long long arr[n],i,j,k;
    for(i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }
    for(i=0;i<n-2;i++)
    {
        for(j=i+1;j<n-1;j++)
        {
            if(arr[j]-arr[i]==d)
                {
                    for(k=i+2;k<n;k++)
                    {
                        if(arr[k]-arr[j]==d)
                        {
                            guntasi++;
                            break;
                        }
                    }
                    break;
                }
        }
    }
    cout << guntasi << endl;
    return 0;

}
