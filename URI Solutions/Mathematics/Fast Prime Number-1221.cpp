#include<bits/stdc++.h>
using namespace std;

int main(void)
{
   int n, x;
 bool corr = false;

 cin >> n;

 while(n--)
 {
  scanf("%d",&x);

  if(x == 2)
    {
   printf("Prime\n");
    }
  else
    {

   if(x % 2 == 0)
    {
    printf("Not Prime\n");
    }
   else
    {

    for (int j = 3; j < sqrt(x); j += 2)
    {
     if(x % j == 0)
      corr = true;
    }

    if(corr == true)
    {
     printf("Not Prime\n");
    }
    else
    {
     printf("Prime\n");
    }
   }
  }

  corr = false;
 }

 return 0;
}
