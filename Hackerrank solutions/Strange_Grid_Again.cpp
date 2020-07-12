#include <bits/stdc++.h>
using namespace std;

int main() {
  long long r,c,res;
  scanf("%lld %lld",&r,&c);
  if(r%2!=0) res=(r-1)*5+(c-1)*2;
  else res=(r-2)*5+1+(c-1)*2;
  printf("%lld\n",res);
  return 0;
}

