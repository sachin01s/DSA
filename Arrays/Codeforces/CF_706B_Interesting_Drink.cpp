#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>x(n);
    for(int i = 0;i<n;i++){
        cin>>x[i];
    }
    sort(x.begin(), x.end());
    int q;
    cin>>q;
    while(q--){
        int m;
        cin>>m;
        int l = 0;
        int r = x.size();
        while(l<r){
            int mid = l+(r-l)/2;
            if(x[mid]>m){
                r=mid;
            }
            else{
                l=mid+1;
            }
        }
        cout<<l<<endl;
    }
    return 0;
}