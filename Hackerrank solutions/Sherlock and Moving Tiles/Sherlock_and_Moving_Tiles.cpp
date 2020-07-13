#include <bits/stdc++.h>
using namespace std;

int main() {
  long long L,s1,s2,Q,q;
  long double t;
  scanf("%lld %lld %lld",&L,&s1,&s2);
  scanf("%lld",&Q);
  while(Q--){
    scanf("%lld",&q);
    t = (abs(L-sqrt(q))*sqrt(2))/abs(s1-s2);
    printf("%.5Lf\n",t);
  }
  return 0;
}

