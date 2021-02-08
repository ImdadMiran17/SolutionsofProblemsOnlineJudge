#include <bits/stdc++.h>
using namespace std;


int main(void){

  string s;
  set<char>arr;
  getline(cin,s);
  int i=0;
  while(s[i]){
    if(isalpha(s[i])){
      arr.insert(s[i]);
    }
    i++;
  }
  cout << arr.size() << endl;
  return 0;
}

	
	

