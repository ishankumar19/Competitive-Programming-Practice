#include<bits/stdc++.h>
using namespace std;
int main(){
unordered_set<int> s;
    int n, t;
    cin >> n >> t;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        int x = t - a[i];
        if(s.count(x)){
            cout << x << " " << a[i];
            return 0;
    }
    s.insert(a[i]);
}
return 0;
}