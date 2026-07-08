/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=4;
    char alpha='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<alpha<<" ";
            alpha++;
        }
    cout<<endl;
    }
}*/
#include<iostream>
using namespace std;
int main(){
    int n=5;
    char aplha='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<(char)(aplha+i)<<" ";
        }
    cout<<endl;
    }
}