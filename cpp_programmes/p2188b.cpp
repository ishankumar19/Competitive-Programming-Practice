#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

int solve(int n, string s) {
    int zero = 0,one=0;
    if(n==1){
        return n;
    }
    for(char c : s) {
        if(c == '0') zero++;
        else one++;
    }
    if(one==zero){
        int target=(n+1)/2;
        return target;
    }
    else{
    int target = (zero + 1) / 2;  

    return target - 1;
}
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        
        string s;
        cin >> s;
        
        
        int result = solve(n, s);
        cout << result << endl;
    }
    return 0;
}