#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int r,c;
    cin>>r;
    cin>>c;
    int arr[r][c];
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    int size=c*r;
    vector<int>arr(size,0);