#include<bits/stdc++.h>
using namespace std;

int main(void)
{

    int a,b,c,d,e,f,g,h;
    while(1)
    {
        scanf("%d", &a);
        if(a==0) break;
        else
        {
            scanf("%d%d", &b,&c);
            d=a*b;
            e=(d*100)/c;
            f=pow(e,.5);
            printf("%d\n",f);
        }
    }
    return 0;
}
