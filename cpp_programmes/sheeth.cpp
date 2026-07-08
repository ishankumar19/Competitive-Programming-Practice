#include<iostream>
#include<cmath>
using namespace std;
// int main(){
//     int a,b;
//     cin>>a>>b;
//     double c=(double)a/b;
//     cout<<"floor "<<a<<" / "<<b<<" = "<<floor(c)<<endl;
//     cout<<"ceil "<<a<<" / "<<b<<" = "<<ceil(c)<<endl;
//     cout<<"round "<<a<<" / "<<b<<" = "<<round(c)<<endl;
//     return 0;
// }
int main(){
    double a,b;
    cin>>a>>b;
    double r;
    r=a/b;
    //floor
    if(r<=abs(r)){
        cout<<abs(r);
    }
    //ceil
    if(r>=abs(r)){
        cout<<abs(r)+1;}
    //round
    double s=r+0.5;
    int r;
    cout<<abs(r);
    return 0;
}