#include<bits/stdc++.h>
using namespace std;

int main(void)
{

    int q,count=0;
    cin >> q;
    long long a,b,i;
    while(q--)
    {
        scanf("%lld %lld",&a,&b);
        long long r=(int)(floor(sqrt(b))-ceil(sqrt(a)))+1;
        printf("%lld\n",r);
    }
    return 0;
}
