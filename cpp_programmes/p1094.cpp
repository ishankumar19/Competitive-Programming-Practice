#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,count=0;
    cin>>n;
    vector<long long> v(n);
    for(long long i=0;i<n;i++){
        cin>>v[i];
    }
    for(long long i=1;i<n;i++){
        if(v[i]<v[i-1]){
            while(v[i]<v[i-1]){
                v[i]++;
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}