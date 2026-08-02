#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;

        long long l = 1;
        long long r = 2*k;
        while(l<r){
            long long mid = l+(r-l)/2;
            if(mid-(mid/n)>=k){
                r=mid;
            }else{
                l=mid+1;
            }
        }
        cout<<l<<endl;
    } 
    return 0;  
}