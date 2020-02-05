#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int year;
    cin >> year;
    int first,second,third,fourth;
    while(1)
    {
        year++;
        first=year/1000;
        second=(year/100)%10;
        third=(year/10)%10;
        fourth=year%10;
        if(first!=second && first!=third && first!=fourth && second!=third && second!=fourth && third != fourth)
        {
            break;
        }
    }

    cout << year << endl;
    return 0;
}

