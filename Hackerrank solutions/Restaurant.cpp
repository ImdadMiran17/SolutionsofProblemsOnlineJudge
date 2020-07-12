#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
  if(b==0)
    return a;
  return gcd(b,a%b);
}

int main() {
  int T,l,b,res,a;
  cin >> T;
  while(T--){
    scanf("%d %d",&l,&b);
    res=(l*b)/(gcd(l,b)*gcd(l,b));
    printf("%d\n",res);
  }
  
  return 0;
}

