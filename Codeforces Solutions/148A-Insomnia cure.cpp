#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int k,l,m,n,d,guntasi=0,i;
    cin >> k >> l >> m >> n>> d;
    guntasi=d;
    if(k==1||l==1||m==1||n==1)
        cout << d << endl;
    else
    {
        for(i=0;i<=d;i++)
        {
            if(i%k!=0 && i%l!=0 && i%m!=0 && i%n!=0)
                guntasi--;
        }
        cout << guntasi << endl;
    }
    return 0;
}
