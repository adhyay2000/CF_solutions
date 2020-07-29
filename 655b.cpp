#include<bits/stdc++.h>
using namespace std;
long largest_prime(int num){
    long int div=2,ans=0,maxFact;
    while(num!=0){
        if(num%div!=0){
            div++;
        }else{
            maxFact=num;
            num=num/div;
            if(num==1){
                return maxFact;
            }
        }
    }
}

int main(){
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int num;
        cin>>num;
        if(num%2==0) cout << num/2 << " " << num/2 << endl;
        else{
            if(num==1){
                cout << 1 <<" "<< 1 << endl;
                continue;
            }
            long ans = largest_prime(num);
            if(ans==num) cout << 1<< " "<<num-1 << endl;
            else cout << ans << " "<< num-ans << endl;
        }
    }
}