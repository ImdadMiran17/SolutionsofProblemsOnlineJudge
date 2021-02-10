#include <bits/stdc++.h>
using namespace std;

int main(void){
  string first,second, third,atLast;
  cin >> first >> second >> third;
  atLast = first + second;
  sort(atLast.begin(),atLast.end());
  sort(third.begin(),third.end());

  if(atLast == third){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }
  return 0;
}

	
	

