#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int x;
        int ones = 0; 
        for(int i = 0 ; i<n ; i++){
            cin>>x;
            if(x==1){
                ones++;
            }
        }
        if(n%2!=0){
            cout<<"No"<<endl;
            continue;
        }
        if(ones%2==(n/2)%2){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }     
    }
    return 0;
}