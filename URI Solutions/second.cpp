#include<bits/stdc++.h>
using namespace std;

int main(void)
{
  int t,N,a,b,c,d,half;
  while(scanf("%d",&N)!=EOF)
  {

      int arr[N][N],i,j;
      for(i=0;i<N;i++)
      {
          for(j=0;j<N;j++)
          {
              arr[i][j]=0;
          }
      }
      for(i=0;i<N;i++)
      {
          arr[i][i]=2;
      }
      for(i=0,j=N-1;i<N,j>=0;i++,j--)
      {
          arr[i][j]=3;
      }
      a=N/3;
      b=N-a-a;

      for(c=a,i=1;i<=b;i++,c++)
      {
          for(d=a,j=1;j<=b;j++,d++)
          {
              arr[c][d]=1;
          }
      }
      if(N%2==1)
        half=N/2;
      else
        half=(N/2)-1;

        arr[half][half]=4;

      for(i=0;i<N;i++)
      {
          for(j=0;j<N;j++)
          {
              printf("%d",arr[i][j]);
          }
          printf("\n");
      }
      printf("\n");
  }
  return 0;
}
