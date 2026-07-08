#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int remaining = 240 - k;
    int solved = 0;
    for(int i = 1; i <= n; i++){
        int time = 5 * i * (i + 1) / 2;
        if(time <= remaining){
            solved = i;
        } else {
            break;
        }
    }
    cout << solved;
    return 0;
}
