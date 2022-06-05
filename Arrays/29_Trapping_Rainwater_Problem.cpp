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

    vector<int>maxLeft(size,0);
    vector<int>maxRight(size,0);

    maxLeft[0]=arr[0];
    for (int i=1;i<size;i++){
        maxLeft[i]=std::max(maxLeft[i-1],arr[i]);
    }
    maxRight[size-1]=arr[size-1];
    for (int i=size-2;i>=0;i--){
        maxRight[i]=std::max(maxRight[i+1],arr[i]);
    }
    vector<int>ans(size,0);
    for (int i=0;i<size;i++){
        ans[i]=(std::min(maxLeft[i],maxRight[i])-arr[i]);
    }
    int sum=0;
    for (int i=0;i<size;i++){
        sum+=ans[i];
    }
    cout<<sum<<endl;
}