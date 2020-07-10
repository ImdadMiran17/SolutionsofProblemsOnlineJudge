#include <bits/stdc++.h>
using namespace std;

int main(void){
  int T,N,t;
  cin >> T;
  while(T--){
    scanf("%d",&N);
    long long routes = 1;
    for(int i=1;i<N;i++){
      scanf("%d",&t);
      routes=(routes*t)%1234567;
    }
    printf("%lld\n",routes);
  }
  return 0;
}

