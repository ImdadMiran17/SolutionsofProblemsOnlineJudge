#include <bits/stdc++.h>
using namespace std;

int digitSum(long long num){
  long long temp=0,res=0;
  while(num>0){
    temp = num % 10;
    num = num/10;
    res+=temp;
  }
  return res;
}

int main() {
  unsigned n, best, bestSum, lim;
  scanf("%u", &n);
  best = n;
  bestSum = digitSum(n);
  lim = (unsigned) sqrt(n);

  for (unsigned i = 1; i <= lim; i++) {
    if (n % i == 0) {
      unsigned sum = digitSum(i);
      if (sum > bestSum || (sum == bestSum && i < best)) {
        bestSum = sum;
        best = i;
      }
      sum = digitSum(n/i);
      if (sum > bestSum || (sum == bestSum && n/i < best)) {
        bestSum = sum;
        best = n/i;
      }
    }
  }
  printf("%u\n", best);
  return 0;
}

