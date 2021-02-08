#include <bits/stdc++.h>
using namespace std;


int main(void){

  int t,n,cntOdd=0,cntEven=0,indexOdd,indexEven;
  cin >> t;
  for(int i=1;i<=t;i++){
    scanf("%d",&n);
    if(n%2==0){
      cntEven++;
      indexEven = i;
    }else{
      cntOdd++;
      indexOdd = i;
    }
  }
  if(cntOdd == 1){
    cout << indexOdd << endl;
  }else if(cntEven == 1){
    cout << indexEven << endl;
  }
  return 0;
}

	
	

