#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,taxi=0,c1=0,c2=0,c3=0,c4=0;
    cin>>n;
    vector<long long> a(n);
    for(long long i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1) c1++;
        else if(a[i]==2) c2++;
        else if(a[i]==3) c3++;
        else if(a[i]==4) c4++;
    }
    taxi += c4;
    taxi += c3;
    c1 = max(0LL, c1 - c3);
    taxi += c2 / 2;
    if(c2 % 2){
        taxi += 1;
        c1 = max(0LL, c1 - 2);
    }
    taxi += (c1 + 3) / 4;
    cout << taxi << endl;
    return 0;
}