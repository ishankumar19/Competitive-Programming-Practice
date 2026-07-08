#include<iostream>
using namespace std;
void sum(int x, int y){
        int c=x+y;
        cout<<"the sum of the numbers is "<<c;
}
void sub(int x,int y){
    int c=x-y;
    cout<<"\nthe subtraction is "<<c;
}
void mult(int x , int y){
    int c=x*y;
    cout<<"\nthe multiplication of the given numbers is "<<c;
}
int main(){
    int a,b;
    cout<<"enter the first number\n";
    cin>> a;
    cout<< "enter the second number\n";
    cin>> b;
    sum(a,b);
    sub(a,b);
    mult(a,b);
    return 0;
}