#include<bits/stdc++.h>
using namespace std;

int main(void)
{

    int days=215;//as 256th day falls in 9th month,so count till
                      // 8 month without february because the days of
                      // february are variable between julian and gregorian 
                      // calender
    int year,febr;
    cin >> year;
    if(year<=1917)
    {
        if(year%4==0)
            febr=29;
        else
            febr=28;
    }
    else if(year==1918)
        febr=15;
    else
    {
        if((year%400==0)|| (year%4==0) && (year%100!=0))
            febr=29;
        else
            febr=28;
    }

    printf("%.2d.09.%d\n",256-(days+febr),year);
    return 0;
}
