#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>> test;
    for(int i=0;i<test;i++){
        int size;
        cin >> size;
        int arr[size];
        for(int j=0;j<size;j++){
            int tmp;
            cin >> tmp;
            arr[i]=tmp;
        }
        int brr[2*size]={1};
        for(int i=0;i<size;i++){
            brr[2*size-1-i]=0;
        }
        solve(arr,brr,size);
    }
}