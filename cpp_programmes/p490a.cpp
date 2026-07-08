#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,c1=0,c2=0,c3=0;
    cin>>n;
    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1) c1++;
        else if(a[i]==2) c2++;
        else c3++;
    }
    if(c1==0 || c2==0 || c3==0){
        cout<<"0\n";
        return 0;
    }
    long long teams=min(c1,min(c2,c3));
    cout<<teams<<endl;
    int i1=0,i2=0,i3=0;
    for(int i=0;i<teams;i++){
        while(a[i1]!=1) i1++;
        while(a[i2]!=2) i2++;
        while(a[i3]!=3) i3++;
        cout<<i1+1<<" "<<i2+1<<" "<<i3+1<<endl;
        i1++;
        i2++;
        i3++;
    }
}