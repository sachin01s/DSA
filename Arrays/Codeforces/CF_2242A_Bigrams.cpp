#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int k;
        cin>>k;

        int cnt2 = 0;
        bool yes = false;

        for(int i=0;i<k;i++){
            int x;
            cin>>x;

            if(x>=3){
                yes = true;
            }
            else if(x>=2){
                cnt2++;
            }
        }
        if(yes  || cnt2>=2 ){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
}