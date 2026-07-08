#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a; 
    cin >> a;

    for(long long b = a+1; ; b++){
        long long x = b;
        vector<int> f(10,0);
        bool ok = true;

        while(x){
            int d = x%10;
            if(f[d]++){ ok = false; break; }
            x/=10;
        }

        if(ok){
            cout << b;
            break;
        }
    }
}
