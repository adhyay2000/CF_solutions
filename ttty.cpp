#include<bits/stdc++.h>
using namespace std;
int lcm(int a, int b)  
 {  
    return (a*b)/__gcd(a, b);  
 } 
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
    int num=50;
    for(int i=3;i<num;i++){
        if(i%2==0) continue;
        int min_val=INT_MAX;
        for(int j=i-1;j>0;j--){
            min_val=min(min_val,lcm(j,i-j));
        }
        cout << i <<  ":" << min_val << endl;
        cout << "Lonestprimes"<<largest_prime(i) << endl;
    }
}