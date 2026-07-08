#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,k,n;
    cin>>a>>k>>n;
    long long result= (n*k)/a;
    if( ){
        cout<<"int";
    }
    else if(result==(float)result){
        cout<<"double";
    }
    else{
        cout<<"long long";
    }
    return 0;
}