#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;
void solve() {
    long long n;// interger 
        cin >> n;
        long long count = 0;
        bool possible = true;
        while(n != 1) {
            if(n%6==0) {
                n=n/6;
                count++;
            }
            else{
                if((n*2)%6==0){
                    n=n*2;
                    count++;
                }
                else {
                    possible=false;
                    break;
                }
            }
        }
        if(possible)
            cout<<count<<endl;
        else
            cout<<-1<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;// test cases
    while(t--) {
       solve();
    }
    return 0;
}