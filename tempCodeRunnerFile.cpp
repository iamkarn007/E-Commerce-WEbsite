#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr=[1,4,5,2,3,6,7,12,3,8];
    int n=10;
    m=3;
    if(m>n) 
        cout<<"Can't Distribute";
    sort(arr,arr+n);
    int minDiff=INT_MAX;

    for(int i=0;i<n-m;i++){
        if(arr[i+m-1]-arr[i]<minDiff)
            minDiff=arr[i+m-1]-arr[i];
    }
    return minDiff;

}