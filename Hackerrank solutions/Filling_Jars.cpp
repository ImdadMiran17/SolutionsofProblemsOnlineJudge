#include <bits/stdc++.h>
using namespace std;

int main() {
  long long N,M,a,b,k,sum=0;
  cin >> N >> M;
  while(M--){
    scanf("%lld %lld %lld",&a,&b,&k);
    sum +=(abs(a-b)+1)*k;
  }
  cout << sum/N << endl;
  return 0;
}

