#include<bits/stdc++.h>
using namespace std;

int main(void)
{

    int n,longfact[1000],i,j;
    cin >> n;
    longfact[0]=1;
    int sizef=1;
    for(i=2;i<=n;i++)
    {
        int baki=0;
        for(j=0;j<sizef;j++)
        {
            int product=longfact[j]*i+baki;
            longfact[j]=product%10;
            baki=product/10;
        }
        while(baki)
        {
            longfact[sizef]=baki%10;
            baki/=10;
            sizef++;
        }
    }
    for(i=sizef-1;i>=0;i--)
        printf("%d",longfact[i]);
    cout << endl;
    return 0;
}
