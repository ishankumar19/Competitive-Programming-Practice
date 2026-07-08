#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    long long A=0, T=0, C=0, G=0;

    for(char ch : s){
        if(ch == 'A'){
            A++;
            T = C = G = 0;
        }
        else if(ch == 'T'){
            T++;
            A = C = G = 0;
        }
        else if(ch == 'C'){
            C++;
            A = T = G = 0;
        }
        else if(ch == 'G'){
            G++;
            A = T = C = 0;
        }
    }

    cout << max({A, T, C, G});
    return 0;
}
