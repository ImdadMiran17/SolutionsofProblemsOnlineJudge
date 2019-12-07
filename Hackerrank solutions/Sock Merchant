#include<bits/stdc++.h>
using namespace std;

int main(void)
{

    int n,i,pairs=0;
    cin >> n;
    int ar[n],guntasi[101]={0};
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        guntasi[ar[i]]++;
    }
    for(i=0;i<101;i++)
    {
        if(guntasi[i]!=0)
            pairs+=guntasi[i]/2;
    }
    cout << pairs << endl;
    return 0;
}
