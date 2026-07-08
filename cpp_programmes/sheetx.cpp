#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    long long x=max({a,c});
    long long y=min({b,d});
    if (x<=y){
        cout<<x<<" "<<y;
    }
    else{
        cout<<"-1";
    }
    return 0;
}