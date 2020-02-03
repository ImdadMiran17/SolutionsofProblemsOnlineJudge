#include<bits/stdc++.h>
using namespace std;

int lucky(long long n)
{
    int a;
    int cnt=0;
    while(n)
    {
        a=n%10;
        if(a==7 || a==4)
            cnt++;
        n=n/10;
    }
   return cnt;
}
int main(void)
{
   long long n;
   cin >> n;
   int ans;
   ans=lucky(n);
   if(ans==4 || ans ==7)
    printf("YES\n");
   else
    printf("NO\n");
    return 0;
}
