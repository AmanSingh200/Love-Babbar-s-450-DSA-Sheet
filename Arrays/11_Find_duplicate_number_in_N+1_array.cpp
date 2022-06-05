#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin>>size;
    vector<int>nums(size,0);
    for (int i=0;i<size;i++){
        cin>>nums[i];
    }
        sort(nums.begin(),nums.end());
        int ans=0;
        for (int i=0;i<size-1;i++){
            int j=i+1;
            if (nums[i]==nums[j]){
                ans=nums[i];
                break;
            }
        }
    cout<<ans<<endl;
}