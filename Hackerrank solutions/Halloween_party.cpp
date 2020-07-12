#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  long long k,res;
  cin >> T;
  while(T--){
    scanf("%lld",&k);
    if(k%2!=0)
      res = (k/2)*(k-(k/2));
    else res = (k/2)*(k/2);
    printf("%lld\n",res);
  }
  return 0;
}

