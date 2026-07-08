#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int ncr(int n,int r){
    float result = (fact(n))/((fact(r)*fact(n-r)));
    return result;
}
int main(){
    int n,r;
    cout<<"Enter the values of n and r:"<<endl;
    cin>>n>>r;
    cout<<"The value of ncr is:"<<ncr(n,r)<<endl;
    return 0;
}