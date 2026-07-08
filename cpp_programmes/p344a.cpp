#include<iostream>
#include<vector>
#include<string>
using namespace std;
// int main(){
// long long n;
// cin >> n;

// vector<string> a(n);
// for(int i = 0; i < n; i++) {
//     cin >> a[i];
// }
// if(n==1){
//     cout<<1;
//     return 0;
// }
// int count = 0;
// for(int i = 0; i < n-1; i++) {
//     if (a[i] == a[i+1]) {
//         count++;
//     }
//     else {
//     cout<<a[0].length()<<endl;
//     return 0;
// }
// }
//     cout<<count<<endl;
//     return 0;

// }
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
long long n;
cin >> n;
vector<string> a(n);
for(int i = 0; i < n; i++) {
    cin >> a[i];
}
int count = 1;
for(int i = 0; i < n-1; i++) {
    if (a[i] == a[i+1]) {
        continue;
    }
    else{
        count++;
    }
}
    cout<<count<<endl;
    return 0;
 
}