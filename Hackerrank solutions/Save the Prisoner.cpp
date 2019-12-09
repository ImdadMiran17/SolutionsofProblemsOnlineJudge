#include<bits/stdc++.h>
using namespace std;

int main(void)
{

    int t;
    cin >> t;
    long long n,m,s;
    for(int i=1;i<=t;i++)
    {
        scanf("%lld %lld %lld",&n,&m,&s);
        long long warn=(m+s-1)%n;
        if(warn==0)
            cout << n << endl;
        else
            cout << warn << endl;
    }
    return 0;
}
