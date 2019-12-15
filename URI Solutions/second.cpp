#include<bits/stdc++.h>
using namespace std;

int main(void)
{
   int a,b,c;
    while(scanf("%d%d", &a, &b)!=EOF)
    {
        if(a==b)
            printf("%d\n", a);
        else if(a>b)
            printf("%d\n", a);
        else if(a<b)
            printf("%d\n", b);
    }
    return 0;
}
