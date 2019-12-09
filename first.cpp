#include<bits/stdc++.h>
using namespace std;

int main(void)
{

    int n,m,i,j,k,count=0;
    cin >> n >> m;
    int a[n],b[m];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    for(k=1;k<=100;k++)
    {
        bool flag=true;
        for(i=0;i<n;i++)
        {
            if(k%a[i]!=0)
                flag=false;
        }
        for(i=0;i<m;i++)
        {
            if(b[i]%k!=0)
                flag=false;
        }
        if(flag==true)
            count++;
    }

    cout << count << endl;
    return 0;
}
