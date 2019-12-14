#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    double a=0.0, M[12][12];
    char T[2];
    int C,x,y;
    cin >> T;
    for(x=0;x<12;x++)
    {
        for(y=0; y<12; y++)
        {
        scanf("%lf", &M[x][y]);


        }
    }
    for(x=0;x<12;x++)
    {
        for(y=x+1; y<12; y++)
        {
        a+=M[x][y];


        }
    }
    if(T[0]=='S')
        printf("%.1lf\n",a);
    else if(T[0]=='M')
    {
        a=a/66.0;
        printf("%.1lf\n",a);
    }
    return 0;
}
