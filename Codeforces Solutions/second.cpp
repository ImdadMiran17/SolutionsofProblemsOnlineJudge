#include<bits/stdc++.h>
using namespace std;


int main(void)
{
   long long n,i,sum=0,cnt=0,ans=0,ave;
   cin >> n;
   vector<long long>vect(n);

   for(i=0;i<n;i++)
   {
       scanf("%lld",&vect[i]);
       sum+=vect[i];
   }

   ave=sum/2;
   sort(vect.begin(),vect.end());
   for(i=n-1;i>=0;i--)
   {
      ans+=vect[i];
      cnt++;
      if(ans>ave)
        break;
   }

   cout << cnt << endl;

    return 0;
}
