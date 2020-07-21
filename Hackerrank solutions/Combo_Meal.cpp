#include <bits/stdc++.h>
using namespace std;

int main() {
  int t,b,s,c;
  cin >> t;
  while(t--){
    scanf("%d %d %d",&b,&s,&c);
    printf("%d\n",(b+s)-c);
  }
  return 0;
}

