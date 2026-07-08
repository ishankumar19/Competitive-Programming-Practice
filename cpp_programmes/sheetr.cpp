#include<iostream>
using namespace std;
int main(){
    long long a;
    cin>>a;
    int yr=a/365;
    int mon=(a%365)/30;
    int days=(a%365)%30;
    cout<<yr<<" years"<<endl<<mon<<" months"<<endl<<days<<" days";
    return 0;
}