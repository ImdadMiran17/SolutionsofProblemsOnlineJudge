#include<bits/stdc++.h>
using namespace std;

int main(void)
{

    int n,k,energy=100,i;
    cin >> n >>k;
    int c[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&c[i]);
    }
    for(i=0;i<n;i+=k)
    {
        if(c[i]==0)
            energy--;
        else if(c[i]==1)
            energy-=3;
    }

    cout << energy << endl;
    return 0;
}
