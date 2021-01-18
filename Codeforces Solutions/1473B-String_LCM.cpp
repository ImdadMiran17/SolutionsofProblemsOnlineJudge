#include <bits/stdc++.h>
using namespace std;


int main(void){

  auto mul = [](string s,int k) -> string{
    string res = "";
    while(k--) res+=s;
    return res;
  };

  int q;
  cin >> q;
  while(q--){
    string s,t;
    cin >> s >> t;
    int n = s.length(), m = t.length();
    int g = __gcd(n,m);
    if(mul(s,m/g) == mul(t,n/g)){
      cout << mul(s,m/g) << endl;
    }else{
      cout << "-1" << endl;
    }
  }
  return 0;
}

	
	

