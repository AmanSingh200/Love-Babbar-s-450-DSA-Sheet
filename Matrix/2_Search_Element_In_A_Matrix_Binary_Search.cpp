#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool binarySearch(vector<vector<int> > &arr,int n,int m,int target,int mid){
    int start=0;
    int end=m-1;
    int middle=start+((end-start)/2);
    while (start<=end){
        if(arr[mid][middle]==target)
            return 1;
        if (arr[mid][middle]>target)
            end=middle-1;
        if (arr[mid][middle]<target) 
            start=middle+1;
        middle=start+(end-start)/2;
    }
    return 0;
    
}
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    vector<vector<int> > arr (n,vector<int>(m));   // 2d array with N rows and M columns
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int target;
    cin>>target;

    // find row
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    
    
    while (s<=e){
        //starting element of the row
        if (arr[mid][0]==target){
            cout<<true<<" ";
            break;
        }
        // ending element of the row
        if (arr[mid][m-1]==target){
            cout<<true<<" ";
            break;
        }
        // between the starting element and the ending element of the row 
        if (target>arr[mid][0] && target<arr[mid][m-1]){
            //apply binary search on the columns
            int ans=binarySearch(arr,n,m,target,mid);
            cout<<ans<<" ";
            break;
        }
        // Check the UPPER ROW
        if (target>arr[mid][m-1]){
            s=mid+1;
        }
        // CHECK THE LOWER ROW
        if (target<arr[mid][0]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    cout<<false<<" ";
}