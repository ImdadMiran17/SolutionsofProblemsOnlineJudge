#include <bits/stdc++.h>
using namespace std;

long long handShake(long long N){
  return (N*(N-1))/2;
}

int main(void){
  int T;
  long long N,res;
  cin >> T;
  while(T--){
    scanf("%lld",&N);
    res = handShake(N);
    printf("%lld\n",res);
  }
  return 0;
}


