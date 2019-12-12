#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    long long n,t,mini,i,j,a;
    cin >> n >> t;
    long long arr[n];
    for(a=0;a<n;a++)
    {
        scanf("%lld",&arr[a]);
    }
    while(t--)
    {
        scanf("%lld %lld",&i,&j);
        mini=arr[i];
        for(a=i+1;a<=j;a++)
        {
            if(arr[a]<mini)
                mini=arr[a];
        }
        printf("%lld\n",mini);
    }
    return 0;
}
