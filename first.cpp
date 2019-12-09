#include<bits/stdc++.h>
using namespace std;

long long reverse(long long n)
{
    long long temp=0;
    while(n!=0)
    {
        temp*=10;
        temp+=n%10;
        n/=10;
    }
    return temp;
}

int main(void)
{

    long long int i,j,k,count=0;
    cin >> i >> j >> k;
    for(long long int a=i;a<=j;a++)
    {
        if(abs(a-reverse(a))%k==0)
            count++;
    }
    cout  << count << endl;
    return 0;
}
