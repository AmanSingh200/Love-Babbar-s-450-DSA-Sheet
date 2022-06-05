// Not Completed
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
    if (size==1){
        cout<<0<<endl;
    }
    else if (arr[0]==0){
        cout<<-1<<endl;
    }
    int count=0;
    int minIndex=0;
    while (minIndex<=size-1){
        minIndex+=arr[minIndex];
        count++;
    }
    cout<<count<<endl;
}