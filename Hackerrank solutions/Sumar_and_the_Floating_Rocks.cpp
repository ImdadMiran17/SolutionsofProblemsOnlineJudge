#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b){
  if(b==0) return a;
  return gcd(b,a%b);
}

int main() {
  long long T,x1,x2,y1,y2,res;
  cin >> T;
  while(T--){
    scanf("%lld %lld %lld %lld",&x1,&y1,&x2,&y2);
    res = abs(gcd(x2-x1,y2-y1))-1;
    printf("%lld\n",res);
  }
  return 0;
}

