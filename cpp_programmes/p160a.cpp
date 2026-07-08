#include<bits/stdc++.h>
using namespace std;
int main(){
    // 1<=n,an=100
    //O(n) time complexity
    long long n,sum=0,coins_take=0,sum_of_coins_taken=0;
    cin>>n;
    vector<long long> value_of_coin(n);
    for(long long i=0;i<n;i++){
        cin>>value_of_coin[i];
        sum+=value_of_coin[i];
    }
    long long target= sum/2;
    sort(value_of_coin.begin(),value_of_coin.end());
    //index of n-1 
    for(long long i=n-1;i>=0;i--){
        coins_take++;
        sum_of_coins_taken+=value_of_coin[i];
        if(sum_of_coins_taken>target){
            cout<<coins_take<<endl;
            return 0;
        }
    }
    return 0;
}