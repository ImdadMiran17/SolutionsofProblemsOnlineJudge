#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    long long t,c,n,m,result=0,temp;
    cin>> t;
    while(t--)
    {
        scanf("%lld %lld %lld",&n,&c,&m);
        result=temp=n/c;
        while(temp>=m)
        {
            result++;
            temp-=m;
            temp++;
        }
        printf("%lld\n",result);
    }
    return 0;
}
