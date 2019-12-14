#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int a,b,c,d;
    cin >> a >> b;
    if(a<b)
    {
        for(c=a+1; c<b; c++)
        {
            if(c%5==2 || c%5==3)
                printf("%d\n",c);
        }
    }
    else if(a>b)
    {
        for(c=b+1; c<a; c++)
        {
            if(c%5==2 || c%5==3)
                printf("%d\n",c);
        }
    }
    return 0;
}
