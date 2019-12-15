#include<bits/stdc++.h>
using namespace std;

int main(void)
{

   int C,N;

    cin >> C;
   while(C--)
   {
       scanf("%d",&N);
       if(N%2==0)
         printf("0\n");
       else
         printf("1\n");
   }
    return 0;
}
