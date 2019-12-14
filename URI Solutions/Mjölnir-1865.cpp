#include<bits/stdc++.h>
using namespace std;

int main(void)
{

   int C,N;
    char power[40];
    cin >> C;
   while(C--)
   {
       scanf("%s %d",power,&N);
       if(strcmp(power,"Thor")==0)
         printf("Y\n");
       else
         printf("N\n");
   }
    return 0;
}
