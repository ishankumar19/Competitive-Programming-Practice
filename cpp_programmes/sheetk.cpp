#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long long a,b,c;
    cin>>a>>b>>c;
    long long x=max({a,b,c});
    long long y=min({a,b,c});
    cout<<y <<" "<< x;
    return 0;
}