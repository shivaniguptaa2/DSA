#include<bits/stdc++.h>
using namespace std;
//1. Find the number when row and column is given

int nCr(int n, int r){
    long long res = 1;
    for(int i=0;i<r;i++){
        res = res*(n-i);
        res = res/(i+1);
    }
    return res;
}

int main(){
    int n, r;
    cin>>n>>r;
    n=n-1;
    r=r-1;
    long long ans = nCr(n,r);
    cout<<ans;
}

//2. Print the all the element of row of pascals tringle row is given.

void generteRow(int n){
    long long res = 1;
    cout<<res;
    for(int i = 0;i<n;i++){
        res = res*(n-i);
        res = res/(i+1);
    }
    cout<<res;
}

int main(){
    int n;
    n = n-1;
    generteRow(n);
    return 0;
}

//3. Print pascals tree when n(no of rows are given).
int main(){
    int n;
    cin>>n;
    for(int i =0;i<n;i++){
        generteRow(i);
    }
}