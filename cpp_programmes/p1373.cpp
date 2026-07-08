#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;
void solve() {
    string s;
    cin>>s;
    ll length=s.length(),cnt0=0,cnt1=0;
    for(int i=0;i<length;i++){
        if(s[i]=='0') cnt0++;
        else cnt1++;
    }
    ll moves=min(cnt0,cnt1);
    if(moves%2==0){
        cout<<"NET"<<endl;//alice loses 
    }
    else{
        cout<<"DA"<<endl;//alice will win
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}