#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>a(n);    
    for(int i = 0 ;i<n;i++){
        cin>>a[i];  
    }
    vector<int>prefix(n);
    prefix[0]=a[0];
    for(int i = 1 ;i<n;i++){
        prefix[i]=prefix[i-1]+a[i];
    }
    int m;
    cin>>m;
    while(m--){
        int q;
        cin>>q;
        int l = 0;
        int r = n;
        while(l<r){
            int mid = l+(r-l)/2;
            if(prefix[mid]>=q){
                r=mid;
            }else{
                l=mid+1;
            }
        }
        cout<<l+1<<endl;;
    }
    return 0;
}