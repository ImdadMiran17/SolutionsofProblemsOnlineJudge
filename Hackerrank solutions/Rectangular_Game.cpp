#include <bits/stdc++.h>
using namespace std;

int main() {
  long long N,a,b,mnA=1000000,mnB=1000000;
  cin >> N;
  while(N--){
    scanf("%lld %lld",&a,&b);
    if(a<mnA)mnA=a;
    if(b<mnB)mnB=b;
  }
  cout << mnA*mnB << endl;
  return 0;
}

