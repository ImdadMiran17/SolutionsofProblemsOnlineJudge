#include<bits/stdc++.h>
using namespace std;

int main(void)
{

    int n,k,i,max,doses;
    cin >> n >> k;
    int h[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&h[i]);

    }
    max=h[0];
    for(i=0;i<n;i++)
    {
        if(h[i]>max)
            max=h[i];
    }
    if(max>k)
    {
        doses=max-k;
        cout << doses << endl;
    }
    else
        cout << "0" << endl;

    return 0;
}
