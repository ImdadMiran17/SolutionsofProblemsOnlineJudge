#include <bits/stdc++.h>
using namespace std;

long long supply(long long a,long long b){
  long long r;
  if(a%2!=0 && b%2==0)r =((a/2)+1)*(b/2);
  else if(a%2==0 && b%2!=0)r=(a/2)*((b/2)+1);
  else if(a%2==0 && b%2==0)r= (a/2)*(b/2);
  else if(a%2!=0 && b%2!=0)r= ((a/2)+1)*((b/2)+1);
  return r; 
}

int main(void){
  long long m,n,res;
  cin >> m >> n;
  res = supply(m,n);
  cout << res << endl;
  return 0;
}

