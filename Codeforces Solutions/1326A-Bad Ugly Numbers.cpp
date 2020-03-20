#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int t,n;
    cin >> t;
    while(t--)
    {
      scanf("%d",&n);
      if(n==1)
         printf("-1");
      else
         printf("2");
         for(int i=0;i<n-1;i++)
            printf("3");

         printf("\n");
    }
    return 0;
}
