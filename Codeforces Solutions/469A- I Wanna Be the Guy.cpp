#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n,p,q,i,cnt=0;
    cin >> n >> p;
    int x[p],newo[n];
    for(i=0;i<p;i++)
    {
        scanf("%d",&x[i]);
        newo[x[i]]=1;
    }
    cin >> q;
    int y[q];
    for(i=0;i<q;i++)
    {
        scanf("%d",&y[i]);
        newo[y[i]]=1;
    }
    bool flag;
    for(i=1;i<=n;i++)
    {
        if(newo[i]==1)
            flag=true;
        else
        {
            flag=false;
            break;
        }
    }

    if(flag==true)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;
    return 0;
}
