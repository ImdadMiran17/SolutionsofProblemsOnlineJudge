#include <bits/stdc++.h>
using namespace std;

int main(void){
  int n,bills = 0;
  cin >> n;
  while(n){
    if(n>=100){
      bills+=n/100;
      n = n%100;
    }else if(n>=20){
      bills+=n/20;
      n = n%20;
    }else if(n>=10){
      bills+=n/10;
      n = n%10;
    }else if(n>=5){
      bills+=n/5;
      n = n%5;
    }else{
      bills+=n/1;
      n = n%1;
    }
  }
  cout << bills << endl;
  return 0;
}

	
	

