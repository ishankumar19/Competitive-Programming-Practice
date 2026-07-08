#include<bits/stdc++.h>
using namespace std;
int main(){
    long long x,y,ans=0,year=0;
    cin>>x>>y;
    long long sub=y-x;
    for(int i=0;i<=sub;i++){
        year=x+i;
       if(year%4==0){
            if(year%400==0 || year%100!=0){
                ans++;
        }
}
}
cout<<ans<<endl;
return 0;
}