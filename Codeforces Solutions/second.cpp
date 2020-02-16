#include<bits/stdc++.h>
using namespace std;


int main(void)
{
    long long x,y,a,b,t,cnt=0,r1,r2;
    cin >> t;
    while(t--)
    {
        scanf("%lld %lld %lld %lld",&x,&y,&a,&b);
        r1=y-x;
        r2=a+b;
        if(r1%r2==0)
            printf("%lld\n",r1/r2);
        else
            printf("-1\n");
    }
    return 0;
}
