#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    long long int arr[5],i;
    long long int sum[5],min,max;
    for(i=0;i<5;i++)
    {
        scanf("%lld",&arr[i]);
    }
    sum[0]=arr[1]+arr[2]+arr[3]+arr[4];
    sum[1]=arr[0]+arr[2]+arr[3]+arr[4];
    sum[2]=arr[0]+arr[1]+arr[3]+arr[4];
    sum[3]=arr[0]+arr[1]+arr[2]+arr[4];
    sum[4]=arr[0]+arr[1]+arr[2]+arr[3];

    min=sum[0];
    max=sum[0];
    for(i=1;i<5;i++)
    {
        if(sum[i]>max)
            max=sum[i];
        else if(sum[i]<min)
            min=sum[i];

    }
    cout << min <<" "<<max << endl;
    return 0;
}
