#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,m,count=0;
    cin>>n>>m;
    while(n!=m){
        if(m%2==0){
            n=n*2;
            count++;
        }
        else if(n>m){
            cout<<-1<<endl;
            break;
        }
        else{
            n=n*3;
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
    //not enough bruh
}