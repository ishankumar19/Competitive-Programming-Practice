#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,c,d=0;
    cin>>a>>b>>c;
    for(int i=1;i<=c;i++){
        d=d+a*i;
    }
    if(d>b){
        cout<<d-b;
    }
    else{
        cout<<"0";
        return 0;
    }
    
    return 0;
}