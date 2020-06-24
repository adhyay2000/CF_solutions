#include<bits/stdc++.h>
using namespace std;
int main(){
    srand(time(NULL));
    int n=10,m=10;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << rand()%2 << " ";
        }
        cout << endl;
    }
}