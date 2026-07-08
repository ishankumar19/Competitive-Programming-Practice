#include<iostream>
#include<string>
using namespace std;
int main(){
    long long n,a=0,d=0;
    string s;
    cin>>n;
    cin>>s;
    for(long long i=0;i<n;i++){
        if(s[i]=='A'){
            a++;
        }
        else{
            d++;
        }
    }
    if(a>d){
        cout<<"Anton"<<endl;
    }
    else if(d>a){
        cout<<"Danik"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }
    return 0;
}