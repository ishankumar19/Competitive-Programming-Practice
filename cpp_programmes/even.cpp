#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    bool found = false;

    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            cout << i << endl;
            found = true;
        }
    }

    if(!found){
        cout << -1 << endl;
    }

    return 0;
}