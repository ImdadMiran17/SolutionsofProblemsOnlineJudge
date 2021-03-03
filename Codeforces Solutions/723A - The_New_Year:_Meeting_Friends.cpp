#include <bits/stdc++.h>
using namespace std;


int main(void){
 int x1,x2,x3;
 cin >> x1 >> x2 >> x3;
 cout << max(x1,max(x2,x3)) - min(x1,min(x2,x3)) << endl;
  return 0;
}

	
	

