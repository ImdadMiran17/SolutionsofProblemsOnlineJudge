#include<bits/stdc++.h>
using namespace std;

int main(void)
{

    long long n,m,b;
    cin >> b >> n >> m;
    long long i,j,max;
    long long kb[n],dr[m];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&kb[i]);
    }
    for(i=0;i<m;i++)
    {
        scanf("%lld",&dr[i]);
    }
    max=0;
    bool beshiHoiaGese=false;
    bool thikAse=false;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(kb[i]+dr[j]>max && kb[i]+dr[j]<b)
                {
                    max=kb[i]+dr[j];
                    thikAse=true;
                }
            else
                beshiHoiaGese=true;
        }
    }

    if(thikAse==true)
        cout << max << endl;
    else if(beshiHoiaGese==true)
        cout << "-1" << endl;
    return 0;
}
