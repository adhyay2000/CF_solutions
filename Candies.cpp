#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin >> test;
    for(int i=0;i<test;i++){
        int num;
        cin >> num;
        if(num%2!=0) cout << num/2 << endl;
        else cout << num/2-1 << endl;
    }
}