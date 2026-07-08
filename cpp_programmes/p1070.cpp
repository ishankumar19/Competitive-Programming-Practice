#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long arr[n];
    long long ans[n];
    for(int i=0;i<n-1;i++){
        arr[i]=i+1;
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]!=1+arr[i+1]){
            ans[i]=arr[i];
        }
    }
    cout<<ans<<endl;
}