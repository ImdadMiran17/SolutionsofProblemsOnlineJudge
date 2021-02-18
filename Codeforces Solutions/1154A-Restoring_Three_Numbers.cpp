#include <bits/stdc++.h>
using namespace std;


int main(void){
  vector<int> arr(4);
  for(auto &it : arr){
    cin >> it;
  }
  sort(arr.begin(),arr.end());
  cout << arr[3] - arr[0] << " " << arr[3] - arr[1] << " " << arr[3] - arr[2] << endl;
  return 0;
}

	
	

