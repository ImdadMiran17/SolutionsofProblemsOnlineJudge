#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    long long n;
    cin >> n;
    long long a[n],i,j,mini=INT_MAX;
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    bool flag=false;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]== a[j])
            {
                if(abs(i-j)<mini)
                {
                    mini=abs(i-j);
                    flag=true;
                    break;
                }
            }
        }
    }

    if(!flag)
        mini=-1;

    cout << mini << endl;
    return 0;

}
