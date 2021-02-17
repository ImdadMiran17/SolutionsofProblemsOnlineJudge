#include <bits/stdc++.h>
using namespace std;


int main(void){
  int n,k,total = 0,problem = 0;
  cin >> n >> k;
  for(int i=1;i<=n;i++){
    total+=5*i;
    if(total + k <= 240)problem++;
  }
  cout << problem << endl;
  return 0;
}

	
	

