#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,cntZerox=0,cntZeroy=0,conx,cony;
  cin >> n;
  int x[n],y[n];
  for(int i=0;i<n;i++){
    scanf("%d %d",&x[i],&y[i]);
  }
  conx= x[0];
  cony=y[0];
  for(int i=0;i<n;i++){
    if(x[i]==conx)cntZerox++;
    if(y[i]==cony)cntZeroy++;
  }
  if(cntZerox==n || cntZeroy==n)cout << "YES" << endl;
  else cout << "NO" << endl;
  return 0;
}

