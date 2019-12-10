#include<bits/stdc++.h>
using namespace std;

int main(void)
{

    int n,count=0;
    cin >> n;
    int c[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&c[i]);
    }
    for(i=1;i<n;count++)
    {
        if(c[i+1]!=1 && i<n-1)
            i+=2;
        else i++;
    }

     cout << count << endl;
    return 0;
}
