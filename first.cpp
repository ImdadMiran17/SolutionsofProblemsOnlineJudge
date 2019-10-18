#include<bits/stdc++.h>
using namespace std;

int main(void)
{
  int n,h,a,width=0;
  cin >> n >> h;
  for(int i=1;i<=n;i++)
  {
    scanf("%d",&a);
    if(a>h)
      width+=2;
    else
      width+=1;
  }
  cout << width << endl;
  return 0;
}
