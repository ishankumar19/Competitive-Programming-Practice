#include<iostream>
using namespace std;
void sum(float x , float y){
    float z=x+y;
    cout<<"the sum of the  given numbers is\n"<<z;
}
void sub(float x, float y){
    float z=x-y;
    cout<<"\nthe subtraction of the given number is\n"<<z;
}
void mult(float x, float y){
    float z=x*y;
    cout<<"\nthe multiplication of the given numbers is\n"<<z;
}
void divi(float x , float y){
    float z=x/y;
    cout<<"\nthe dividion of the given numbers is\n"<<z;
}
int main(){
    float a,b;
    cout<<"enter the first number\n";
    cin>>a;
    cout<<"enter the second number\n";
    cin>>b;
    cout<<"THE ARTHEMATIC OPERATIONS IN THE GIVEN NUMBERS IS AS FOLLOWS\n";
    sum(a,b);
    sub(a,b);
    mult(a,b);
    divi(a,b);
    return 0;
}