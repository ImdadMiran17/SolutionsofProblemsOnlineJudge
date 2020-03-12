#include<bits/stdc++.h>
using namespace std;

int main(void)
{
   int i,t,n,m;
   cin >> t;
   while(t--)
   {
     scanf("%d %d",&n,&m);
     if(n%m==0)
        printf("YES\n");
     else
       printf("NO\n");
   }
  return 0;
}
