#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin>>size;
    vector <int>arr(size,0);
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    sort(arr.begin(),arr.end());
    int max=INT_MIN;
    int min=INT_MAX;
    max=arr[size-k];
    min=arr[k-1];
    cout<<"Kth Maximum Element is "<<max<<endl;
    cout<<"Kth Minimum Element is "<<min<<endl;
}