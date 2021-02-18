#include <bits/stdc++.h>
using namespace std;


int main(void){
  int n,amazing = 0;
  cin >> n;
  int arr[n];
  for(auto &it : arr){
    cin >> it;
  }
  int max = arr[0];
  int min = arr[0];
  for(int i=0; i<n; i++){
    if(arr[i] < min){
      min = arr[i];
      amazing++;
    }
    if(arr[i] > max){
      max = arr[i];
      amazing++;
    }
  }
  cout << amazing << endl;
  return 0;
}

	
	

