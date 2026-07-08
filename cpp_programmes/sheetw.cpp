#include<iostream>
using namespace std;
int main(){
    long long a,b,c;
    char s,d;
    cin>>a>>s>>b>>d>>c;
    if(s=='+' && c==a+b){
        cout<<"Yes";
    }
    else if(s=='+' && c!=a+b){
        cout<<a+b;
    }
    else if(s=='-' && c==a-b){
        cout <<"Yes";
    }
    else if(s=='-' && c!=a-b){
        cout<<a-b;
    }
    else if (s=='*' && c==a*b){
        cout<<"Yes";
    }
    else if (s=='*' && c!=a*b){
        cout<<a*b;
    }
    return 0;
}