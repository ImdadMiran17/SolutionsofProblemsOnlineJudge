#include <bits/stdc++.h>
using namespace std;

int gcdMine(int a, int b){
  if(b==0) return a;
  return gcdMine(b,a%b);
}

int main() {
  int T,N,a,b;
  cin >> T;
  while(T--){
    scanf("%d",&N);
    if(N==1){
      scanf("%d",&a);
      if(a==1)printf("YES\n");
      else printf("NO\n");
      continue;
    }

    scanf("%d",&a);
    for(int i=1;i<N;i++){
      scanf("%d",&b);
      a=gcdMine(a,b);
    }
    if(a>=2)printf("NO\n");
    else printf("YES\n");
  }
  return 0;
}

