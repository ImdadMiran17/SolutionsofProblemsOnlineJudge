#include <bits/stdc++.h>
using namespace std;


int main(void){

  string remix;
  int flag = 1;
  cin >> remix;
  for(int i=0;i<remix.size();i++){
    if(remix[i]=='W' && remix[i+1] == 'U' && remix[i+2] == 'B'){
      i+=2;
      if(!flag){
        cout << " ";
      }
      continue;
    }else {
      flag = 0;
      cout << remix[i];
    }
  }
  cout << endl;
  return 0;
}

	
	

