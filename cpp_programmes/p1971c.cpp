#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // time complexity O(t)
    long long t;//test case=6000
    cin >> t;
    while(t--) {
    long long a,b,c,d;//a b c d =12
    cin>>a>>b>>c>>d;
    string ans;
    for(int i=1;i<13;i++){
        if(i==a || i==b){
            ans+="red";
        }
        if(i==c || i==d){
            ans+="blue";
        }
    }
    if(ans=="redblueredblue" || ans=="blueredbluered"){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
    return 0;
}