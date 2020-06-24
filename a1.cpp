#include<bits/stdc++.h>
using namespace std;
int main(){
    int max=INT_MIN;
    int a,b;
    for(int n=1;n<=100;n++){
    max=INT_MIN;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(__gcd(i,j)>max){
                max=__gcd(i,j);
                a=i;
                b=j;
            }
        }
    }
    cout << n << endl;
    cout << a << " " << b << endl;
    }
}