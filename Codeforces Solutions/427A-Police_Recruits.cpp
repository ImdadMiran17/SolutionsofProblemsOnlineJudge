#include <bits/stdc++.h>
using namespace std;


int main(void){
  int n;
  cin >> n;
  int crime[n];
  int untreated = 0,police = 0; 
  for(int i=0;i<n;i++){
    cin >> crime[i];
    if(crime[i] > 0){
      police+= crime[i];
    }
    else if(crime[i] == -1){
      if(police > 0){
        police--;
      }else{
        untreated++;
      }
    }
  }
  cout << untreated << endl;
  return 0;
}

	
	

