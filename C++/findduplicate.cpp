#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	// for(int i=0;i<n;i++){
	// 	for(int j=i+1; j<n; j++){
	// 		if(arr[i]==arr[j])
	// 		break;
	// 	}
	// }
	// cout<<arr[i];
	// Here the this code is not optimal as the time complexity is n^2
	sort(arr.begin(), arr.end())
	for(int i =0;i<n;i++){
		if(arr[i]==arr[i+1]){
			return arr[i];
		}
		return -1;
	}
	}
