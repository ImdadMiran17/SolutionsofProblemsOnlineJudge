#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int t,n,i;
    cin >> t;
    while(t--)
    {
        scanf("%d",&n);
        vector<int> a(n),b(n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            scanf("%d",&b[i]);
        }

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        for(i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n");

        for(i=0;i<n;i++)
        {
            printf("%d ",b[i]);
        }
        printf("\n");
    }
    return 0;
}
