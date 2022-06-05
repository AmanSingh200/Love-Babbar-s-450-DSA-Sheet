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
    int X;
    cin>>X;
    sort(arr.begin(),arr.end());
    for (int i=0;i<size-2;i++){
        int s=i+1;
        int e=size-1;
        while (s<e){
            if (arr[s]+arr[e]==X-arr[i]){
                cout<<true<<" ";
                break;
            }
            else if (arr[s]+arr[s]<X-arr[i]){
                s++;
            }
            else {
                e--;
            }
        }
    }
    cout<<false<<endl;
    
}