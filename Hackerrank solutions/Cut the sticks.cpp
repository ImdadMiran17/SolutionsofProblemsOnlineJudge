#include<bits/stdc++.h>
using namespace std;

int main(void)
{

    int n,j;
    cin >> n;
    int arr[n];
    int i,num=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    sort(arr,arr+n);

    int remain=n;
     int shortt=arr[0];
     cout << n << endl;
     while(remain>1)
     {
         for(j=0;j<n;j++)
     {
         while(arr[j]==shortt)
         {
             num++;
             j++;
         }
         remain=remain-num;
         if(remain>=1)
            printf("%d\n",remain);
         num=1;
         shortt=arr[j];

     }
     }
    return 0;
}
