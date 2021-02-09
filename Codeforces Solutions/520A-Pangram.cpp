#include <bits/stdc++.h>
using namespace std;


int main(void){
  int n;
  string s;
  cin >> n;
  cin >> s;
  char c = 'A';
  for(int i=0;i<n;i++){
    s[i] = toupper(s[i]);
  }

  if(n>=26){
    for(int j=0;j<26;j++){
      if(s.find(c)!=-1){
        c++;
      }else{
        cout << "NO" << endl;
        return 0;
      }
    }
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }
  return 0;
}

	
	

