#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num;
            num++;
        }
        cout<<endl;
    }
return 0;
}