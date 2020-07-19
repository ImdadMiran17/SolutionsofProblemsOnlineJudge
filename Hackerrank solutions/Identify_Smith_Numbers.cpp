#include <bits/stdc++.h>
using namespace std;

int digitSum(int n){
  int temp,s=0;
  while(n!=0){
    temp=n%10;
    n=n/10;
    s+=temp;
  }
  return s;
}

int main() {
  int N,s1,s2=0;
  cin >> N;
  s1=digitSum(N);
  for(int i=2;i<=N;i++){
    while(N%i==0){
      s2+=digitSum(i);
      N=N/i;
    }
  }
  if(s1==s2)cout<< "1"<< endl;
  else cout << "0" << endl;

  return 0;
}

