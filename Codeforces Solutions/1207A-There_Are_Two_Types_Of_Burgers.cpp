#include <bits/stdc++.h>
using namespace std;


int main(void){

  int t,b,p,f,h,c;
  cin >> t;
  while(t--){
    scanf("%d %d %d",&b,&p,&f);
    scanf("%d %d",&h,&c);

    b/=2;
    if(h<c){
      swap(h,c);
      swap(p,f);
    }

    int res = 0;

    int count = min(b,p);
    b-=count;
    p-=count;
    res+=h*count;

    count = min(b,f);
    b-=count;
    f-=count;
    res+=c*count;

    printf("%d\n",res);
  }
  return 0;
}

	
	

