#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int a,b;
    while(1)
    {
        cin >> a;
        if(a==0) break;
        else
        {
            for(b=1; b<a; b++)
                printf("%d ",b);
        }
        printf("%d\n",a);
    }
    return 0;
}
