#include <bits/stdc++.h>
using namespace std;

int main(void){
  int n;
  map<string,int>database;
  string s;
  cin >> n;
  while(n--){
    cin >> s;
    if(database.count(s) == 0){
      printf("OK\n");
      database[s] = 1;
    }else{
      cout << s << database[s] << endl;
      database[s]+=1; 
    }
  }
  return 0;
}

	
	

