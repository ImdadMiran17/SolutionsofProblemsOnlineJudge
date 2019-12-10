#include<bits/stdc++.h>
using namespace std;

int main(void)
{

    int t,count=0;

    cin >> t;
    long long n,a;
    while(t--)
    {
        scanf("%lld",&n);
        long long temp;
        temp=n;
       while(temp!=0)
       {
        a=temp%10;
        if(a!=0 && n%a==0)
            count++;
        temp=temp/10;
       }
       printf("%d\n",count);
       count=0;

    }
    return 0;
}
