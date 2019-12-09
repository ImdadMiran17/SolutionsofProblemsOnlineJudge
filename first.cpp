#include<bits/stdc++.h>
using namespace std;

int main(void)
{

    long long n,k,q;
    cin >> n >> k >> q;
    vector<long long>ar;
    long long i,temp,a;
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a);
        ar.push_back(a);
    }
    k%=n;

    long long m;
    for(i=1;i<=q;i++)
    {
        scanf("%lld",&m);
        if(m-k>=0)
            printf("%lld\n",ar[m-k]);
        else
            printf("%lld\n",ar[m-k+n]);
    }

    return 0;
}
