#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;
void solve(int a,int b,int c) {
     if(c%2==0){
        if(a>b){
            cout<<"First"<<endl;
        }
        else{
            cout<<"Second"<<endl;
        }
     }
     else{
        if(b>a){
            cout<<"Second"<<endl;
        }
        else{
            cout<<"First"<<endl;
        }
     }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while(t--) {
        ll a,b,c;
        cin>>a>>b>>c;
       solve(a,b,c);
    }
    return 0;
}
/*
working but not efficient enough
#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve(int a,int b,int c) {
     if(b>a){
        cout<<"Second"<<endl;
    }
    else if(a>b){
        cout<<"First"<<endl;
    }
    else if((a==b)  && c%2==0){
        cout<<"Second"<<endl;
    }
    else{
        cout<<"First"<<endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while(t--) {
        ll a,b,c;
        cin>>a>>b>>c;
       solve(a,b,c);
    }
    return 0;
}*/