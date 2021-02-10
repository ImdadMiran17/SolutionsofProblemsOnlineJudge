#include <bits/stdc++.h>
using namespace std;

int main(void){
  map <string,int> arr;
  arr["Tetrahedron"] = 4;
  arr["Cube"] = 6;
  arr["Octahedron"] = 8;
  arr["Dodecahedron"] = 12;
  arr["Icosahedron"] = 20;

  int n,cnt=0;
  cin >> n;
  while(n--){
    string s;
    cin >> s;
    cnt+=arr[s];
  }
  cout << cnt << endl;
  return 0;
}

	
	

