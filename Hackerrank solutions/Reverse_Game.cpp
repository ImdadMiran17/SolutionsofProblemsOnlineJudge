#include <bits/stdc++.h>
using namespace std;


int main() {
  int T;
  long long N,K,res;
  cin >> T;
  while(T--){
    scanf("%lld %lld",&N,&K);
    if(K < (N-1-K)){
      res = 2*K+1;
    }else{
      res = 2*(N-1-K);
    } 
    printf("%lld\n",res);
  }
  
  return 0;
}

