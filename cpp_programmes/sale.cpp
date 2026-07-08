#include<bits/stdc++.h>
using namespace std;
int main(){
    long long p;
    float s;
    cin>>s>>p;
    s=s/100; //x=s
    double y= (s*p)/(1-s);//b=y and x=a y= margin between cost price and mrp
    double x=p+y;//mrp 
    cout<<fixed<<setprecision(2)<<x<<endl;
    return 0; 
}