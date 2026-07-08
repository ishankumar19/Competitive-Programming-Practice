#include<bits/stdc++.h>
using namespace std;
int main(){
    //time complecity O(1)
    long long a,b,c;//a b c =10
    cin>>a;
    cin>>b;
    cin>>c;
    long long ans=a+b+c;
    ans= max(ans,(a+b)*c);
    ans=max(ans,a*(b+c));
    ans= max(ans,a*b*c);
    cout<<ans;
    return 0;
}