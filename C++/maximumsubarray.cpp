#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long max = INT_MIN;
    long long sum = 0;
    for(int i =0;i<n;i++){
        sum = sum +arr[i];
        max = max>sum?max:sum;
        if(sum<0){
            sum = 0;
        }
    }
    return max;
}