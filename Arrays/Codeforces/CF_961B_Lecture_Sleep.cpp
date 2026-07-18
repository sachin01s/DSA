#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    vector<int>a(n);
    vector<int>t(n);

    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    for(int i = 0;i<n;i++){
        cin>>t[i];
    }
    //calculating base learning first 
    int baselearning = 0;

    for(int i = 0;i<t.size();i++){
        if(t[i]==1){
            baselearning+=a[i];
        }
    }

    int currExtra = 0;
    int maxExtra = currExtra;

    //First Window
    for(int i = 0 ;i<k; i++){
        if(t[i]==0){
            currExtra+=a[i];
        }
    }
    maxExtra=currExtra;
    //Sliding Window
    int left = 0;
    int right = k;

    while(right < n){
        if(t[left]==0){
            currExtra-=a[left];
        }
        if(t[right]==0){
            currExtra+=a[right];
        }
        left++;
        right++;
        maxExtra=max(maxExtra,currExtra);    
    }
    int ans = baselearning + maxExtra;
    cout<<ans<<endl;
    return 0;
}