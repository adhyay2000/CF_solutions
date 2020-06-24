#include<bits/stdc++.h>
using namespace std;
int a(int n){
    return floor((-1+sqrt(1+24*n))/6);
}
int b(int n){
    return n*(3*n+1)/2;
}
void solve(int tmp){
    int count=0;
    while(tmp>0){
        if(tmp==1) {break;}
        count++;
        int h=1;
        while(b(h)<=tmp) h++;
        tmp-=b(h-1);
    }
    if(tmp<0) count--;
    cout << count<< endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin >> test;
    for(int i=0;i<test;i++){
        int tmp;
        cin >> tmp;
        solve(tmp);
    }
}