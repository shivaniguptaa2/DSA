//return the missing and repeated numbers

#include<bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
    int miss, repeat;
    sort(arr.begin(), arr.end());
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
          miss=i+1; 
          break; 
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            repeat= arr[i];
            break;
        }
    }
    return {miss, repeat};
}