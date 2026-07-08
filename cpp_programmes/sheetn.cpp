#include<iostream>
#include<cctype>
using namespace std;
int main(){
    char a;
    cin>>a;
    char z=toupper(a);
    char y=tolower(a);
    if(islower(a)){

        cout<<z;
    }
    else{
        cout<<y;
    }
    return 0;
}