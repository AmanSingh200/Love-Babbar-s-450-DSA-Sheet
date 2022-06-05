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
    int r1=0;
    int r2=r-1;
    int c1=0;
    int c2=c-1;
    int d=0;
    while (r1<=r2 && c1<=c2){
        if (d==0){
            for (int i=c1;i<=c2;i++){
                cout<<arr[r1][i]<<" ";
            }
            r1+=1;
        }
        if (d==1){ 
            for (int i=r1;i<=r2;i++){
                cout<<arr[i][c2]<<" ";
            }
            c2-=1;
        }
        if (d==2){
            for (int i=c2;i>=c1;i--){
                cout<<arr[r2][i]<<" ";
            }
            r2--;
        }
        if (d==3){
            for (int i=r2;i>=r1;i--){
                cout<<arr[i][c1]<<" ";
            }
            c1+=1;
        }
        d=(d+1)%4;
    }
}