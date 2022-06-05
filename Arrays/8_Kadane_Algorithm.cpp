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
    int maxEH=0;
    int maxSoFar=INT_MIN;
    for (int i=0;i<size;i++){
        maxEH+=arr[i];
        maxSoFar=max(maxSoFar,maxEH);
        if (maxEH<0){
            maxEH=0;
        }
    }
    cout<<maxSoFar;
}