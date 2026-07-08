#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,even=0,odd=0,positive=0,negative=0;
    cin>>n;
    vector<long long> a(n);
    for(long long i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0){
            even++;
        }
        else if(a[i]%2!=0){
            odd++;
        }
        if(a[i]>0){
            positive++;
        }
        else if(a[i]<0){
            negative++;
        }
    }
    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
    cout<<"Positive: "<<positive<<endl;
    cout<<"Negative: "<<negative<<endl;
    return 0;
}