#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long long a,b,c;
    cin>>a>>b>>c;
    
    long long o1=a,o2=b,o3=c;
    int sorted[3]={a,b,c};
    sort(sorted,sorted+3);
    cout<<sorted[0]<<endl<<sorted[1]<<endl<<sorted[2]<<endl;
    cout<<endl<<a<<endl<<b<<endl<<c;
    return 0;
}