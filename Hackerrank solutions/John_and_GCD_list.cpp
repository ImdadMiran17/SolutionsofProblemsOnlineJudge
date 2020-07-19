#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
  if(b==0)return a;
  return gcd(b,a%b);
}

int main() {
  int T,n;
  cin >> T;
  while(T--){
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)scanf("%d",&arr[i]);
    printf("%d",arr[0]);
    for(int i=1;i<n;i++){
      printf(" %d",(arr[i-1]*arr[i])/gcd(arr[i-1],arr[i]));
    }
    printf(" %d\n",arr[n-1]);
  }
  return 0;
}

