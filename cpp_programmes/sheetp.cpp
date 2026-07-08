#include<iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    if(a < 0) {
        a = -a;
    }
    while(a >= 10){
        a = a / 10;  
    }
    if(a % 2 == 0){
        cout << "EVEN";
    }
    else{
        cout << "ODD";
    }
    return 0;
}