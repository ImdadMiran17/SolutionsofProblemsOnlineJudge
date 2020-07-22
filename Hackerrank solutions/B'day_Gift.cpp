#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  long long sum=0,b;
  double res;
  cin >> N;
  while(N--){
    scanf("%lld",&b);
    sum+=b;
  }
  res = (double)sum/2;
  printf("%.1lf\n",res);
  return 0;
}

