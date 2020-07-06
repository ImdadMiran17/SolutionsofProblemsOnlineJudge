#include <bits/stdc++.h>
using namespace std;

int main(void){
  int n,px,py,qx,qy,rx,ry,dx,dy;
  scanf("%d",&n);
  while(n--){
    scanf("%d %d %d %d",&px,&py,&qx,&qy);
    dx = abs(abs(px)-abs(qx));
    dy = abs(abs(py)-abs(qy));
    if(qx>px){
      rx = dx+qx;
    }else{
      rx = qx-dx;
    }
    if(qy>py){
      ry = dy+qy;
    }else{
      ry = qy-dy;
    }
    printf("%d %d\n",rx,ry);
  }
  return 0;
}


