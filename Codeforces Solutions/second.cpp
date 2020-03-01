#include<bits/stdc++.h>
using namespace std;


int main(void)
{
    int t;
    long long a,b;
    cin >> t;
    while(t--)
    {
        scanf("%lld %lld",&a,&b);

        if(a>b)
        {
            if((a-b)%2!=0)
                printf("2\n");
            else
                printf("1\n");
        }
        else if(b>a)
        {
            if((b-a)%2!=0)
            {
                printf("1\n");
            }
            else
            {
                printf("2\n");
            }
        }
        else
            printf("0\n");
    }

    return 0;
}
