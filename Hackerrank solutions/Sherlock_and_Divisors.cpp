#include <bits/stdc++.h>
using namespace std;

int main() {
  long long N,T,i;
  cin >> T;
  while(T--){
    scanf("%lld",&N);
    int cnt=0;
    for(i=2;i<=sqrt(N);i++){       // you can use i*i<=N.both will work.
      if(N%i==0 && i%2==0)cnt++;
      if(N%(N/i)==0 && (N/i)!=i && (N/i)%2==0)cnt++;
    }
    if(N%2==0)cnt++;

    printf("%d\n",cnt);  
  }
  return 0;
}

