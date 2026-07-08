#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a=0,b=0;
    cin>>n;
    a=n%10;
    b=n/10;
    if(a%b==0 || b%a==0){
        cout<<"YES";
    } else {
        cout<<"NO";
    }
    return 0;
}