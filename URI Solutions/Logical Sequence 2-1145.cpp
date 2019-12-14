#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int X,Y,z,a,b=0;
    cin >> X >> Y;
    for(a=1; a<=Y; a++)
    {
        b++;
        if(b==X) printf("%d",a);
        else printf("%d ", a);
        if(b==X)
        {
            b=0;
            printf("\n");
        }
    }
    return 0;
}
