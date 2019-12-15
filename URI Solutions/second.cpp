#include<bits/stdc++.h>
using namespace std;

int main(void)
{
   int a[4],b,c,d,e,f, g;
    for(b=0; b<4; b++)
        scanf("%d", &a[b]);

    sort(a,a+4);

    g=a[1]+a[2];
    f=a[0]+a[1];
    if(a[3]<g || a[2]<f) printf("S\n");
    else printf("N\n");
    return 0;
}
