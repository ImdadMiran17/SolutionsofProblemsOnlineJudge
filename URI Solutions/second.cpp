#include<bits/stdc++.h>
using namespace std;

int main(void)
{
  int t,N;
  while(scanf("%d",&N)!=EOF)
  {

      int arr[N][N],i,j;
      for(i=0;i<N;i++)
      {
          for(j=0;j<N;j++)
          {
              arr[i][j]=3;
          }
      }
      for(i=0;i<N;i++)
      {
          arr[i][i]=1;
      }
      for(i=0,j=N-1;i<N,j>=0;i++,j--)
      {
          arr[i][j]=2;
      }


      for(i=0;i<N;i++)
      {
          for(j=0;j<N;j++)
          {
              printf("%d",arr[i][j]);
          }
          printf("\n");
      }
  }
  return 0;
}
