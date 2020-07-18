#include <bits/stdc++.h>
using namespace std;

double min(double a,double b){
  if(a>b)return b;
  else return a;
}

int main() {
  double mnx,mny,mxx,mxy,x,y,mx,q1,q2,q3,q4;
  int N;
  cin >> N;
  while(N--){
    scanf("%lf %lf",&x,&y);
    if(x==0){
      mny=min(mny,y);
      mxy=max(mxy,y);
    }else{
      mnx=min(mnx,x);
      mxx=max(mxx,x);
    }
  }

  mx = max(abs(mxx-mnx),abs(mxy-mny));
  q1 = sqrt(mxx*mxx+mxy*mxy);
  q2 = sqrt(mnx*mnx+mxy*mxy);
  q3 = sqrt(mnx*mnx+mny*mny);
  q4 = sqrt(mxx*mxx+mny*mny);
  
  printf("%lf\n",max(mx,max(q1,max(q2,max(q3,q4)))));

  return 0;
}

