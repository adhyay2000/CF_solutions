#include<bits/stdc++.h>
using namespace std;
int solve(char s[],int size,int l,int r,char c){
    // cout << l << r << endl;
    if(l==r){
        if(s[l]!=c) return 1;
        else return 0;
    }
    int mid=(l+r)/2;
    int sum1=0,sum2=0;
    for(int i=l;i<=mid;i++) if(s[i]!=c) sum1++;
    for(int i=mid+1;i<=r;i++) if(s[i]!=c) sum2++;
    sum1+= solve(s,size,mid+1,r,c+1);
    sum2+=solve(s,size,l,mid,c+1);
    return min(sum1,sum2); 
}
int main(){
    // time_t start,end;
    // time(&start);
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int size;
        cin>>size;
        char s[size];
        for(int i=0;i<size;i++){
            char c;
            cin>>c;
            s[i]=c;
        }
        cout << solve(s,size,0,size-1,'a')<< endl;
    }
    // time(&end);
    // cout << endl;
    // cout << end-start << endl;
}