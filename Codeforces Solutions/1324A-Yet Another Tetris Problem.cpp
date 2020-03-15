#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while(t--)
    {
       int n;
       scanf("%d",&n);
       int a[n],i,c=0;
       for(i=0;i<n;i++)
       {
          scanf("%d",&a[i]);
       }
       sort(a,a+n);
       for(i=0;i<n;i++)
       {
          if(i==n-1)
             break;
          else if((a[i+1]-a[i])%2!=0)
          {
             c=1;
             break;
          }
       }
       if(c==0)
          printf("YES\n");
       else
       {
         printf("NO\n");
       }
    }
    return 0;
}
