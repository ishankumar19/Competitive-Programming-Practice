#include<bits/stdc++.h>
using namespace std;
int main(){
long long s,n;
cin>>s>>n;
vector<pair<long long,long long>> items(n);
for(int i=0;i<n;i++){
    cin>>items[i].first>>items[i].second;
}
sort(items.begin(),items.end());
    for(int i=0;i<n;i++){
        if(s>items[i].first){
        s+=items[i].second;
    }
    else{
        cout<<"NO\n";
        return 0;
    }
    }
cout<<"YES\n";
return 0;
}
