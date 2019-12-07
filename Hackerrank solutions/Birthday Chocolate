#include<bits/stdc++.h>
using namespace std;

int main(void)
{

    int n,i,d,m,count=0;
    cin >> n;
    int s[n],sum[105];
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    cin >> d >> m;
    for(i=0;i<n;i++)
    {
        sum[i+1]=sum[i]+s[i];
    }
    for(i=0;i<=n-m;i++)
    {
        if((sum[i+m]-sum[i])==d)
            count++;
    }
    cout << count << endl;

    return 0;
}
