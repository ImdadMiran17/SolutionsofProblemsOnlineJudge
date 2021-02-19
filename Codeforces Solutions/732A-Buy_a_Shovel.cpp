#include <bits/stdc++.h>
using namespace std;


int main(void){
  int i,ans,k,r;
  cin >> k >> r;
  for(i=1;i<10;i++){
    if((k*i)%10 == 0 || (k*i)%10 == r){
      ans = i;
      break;
    }
  }
  cout << ans << endl;
  return 0;
}

	
	

