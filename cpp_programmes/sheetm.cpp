#include<iostream>
#include<cctype>
#include<string>
using namespace std;
int main(){
    string a;
    cin>>a;
    if(isdigit(a[0])){
        cout<<"IS DIGIT";
    }
    else{
        if(isupper(a[0])){
            cout<<"ALPHA"<<endl<<"IS CAPITAL";
        }
        else{
            cout<<"ALPHA"<<endl<<"IS SMALL";    
    }
    }
    return 0;
}