#include <bits/stdc++.h>
using namespace std;

long long height(long long b,long long a){
  if((2*a)%b==0)return (2*a)/b;
  else return ((2*a)/b)+1;
}

int main(void){
  long long a,b,res;
  cin >> b >> a;
  res = height(b,a);
  cout << res << endl;
  return 0;
}

