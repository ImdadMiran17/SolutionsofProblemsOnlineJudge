#include<bits/stdc++.h>
using namespace std;
long long factorial(int n)
{
    long long res,fact;
    if(n==0)
        return 1;
    else
        return n*factorial(n-1);
}
int main(void)
{
    long long M,N;
    long long i,j;
    while(scanf("%d %d",&M,&N)!=EOF)
    {
        i=factorial(M);
        j=factorial(N);
        printf("%lld\n",i+j);
    }
    return 0;
}
