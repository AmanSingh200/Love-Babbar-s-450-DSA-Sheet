#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin>>size;
    vector<int>arr(size,0);
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    sort(arr.begin(),arr.end());
    int max=arr[size-1];
    int min=arr[0];
    int diff=max-min;
    int mindiff=0;
    int maxdiff=0;
    for (int i=0;i<size;i++){
        if (arr[i]-k<0)
            continue;
        mindiff=std::min(arr[i]-k,arr[0]+k);
        maxdiff=std::max(arr[size-1]-k,arr[i+1]+k);

    diff=std::min(diff,maxdiff-mindiff);
    }
    cout<<diff<<endl;
}