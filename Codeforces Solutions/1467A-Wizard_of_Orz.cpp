#include <bits/stdc++.h>
using namespace std;

int largestNumber(){
  int n;
  scanf("%d",&n);

  string s = "989";
  if(n<=3){
    return cout << s.substr(0,n) << "\n",0;
  }
  
  cout << s;
  for(int i=3;i<n;i++){
    cout << (i-3)%10 ;
  }
  cout << "\n";

};

int main(void){

  int t;
  cin >> t;
  while(t--){
    largestNumber();
  }
  return 0;
}

	
	

