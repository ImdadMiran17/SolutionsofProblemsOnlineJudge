#include<bits/stdc++.h>
using namespace std;

int main(void)
{

    int t;
    cin >> t;
    long long b,w,bc,wc,z,total;
    while(t--)
    {
        scanf("%lld %lld",&b,&w);
        scanf("%lld %lld %lld",&bc,&wc,&z);
        total=(b*min(bc,wc+z))+(w*min(wc,bc+z));
        printf("%lld\n",total);
    }
    return 0;
}
