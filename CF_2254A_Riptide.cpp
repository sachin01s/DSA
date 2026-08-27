#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int rounds = 0;

        while(true){
            vector<int>v = {a,b,c};
            sort(v.begin(),v.end());
            
            if(v[0]==v[1] || v[1]==v[2]){
                break;
            }

            v[0]++;
            v[2]--;

            rounds++;
            a=v[0];
            b=v[1];
            c=v[2];
        }
        cout<<rounds<<endl;
    }
    return 0;
}