#include <bits/stdc++.h>
using namespace std;


int main(void){

  int n,p;
  cin >> n;
  vector<int>a(n+1);
  for(int i=1;i<=n;i++){
    cin >> p;
    a[p] = i;
  }
  cout << a[1];
  for(int i=2;i<=n;i++){
    cout << " " << a[i];
  }
  cout << endl;
  return 0;
}

	
	

