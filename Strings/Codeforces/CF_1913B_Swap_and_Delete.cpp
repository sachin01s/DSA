#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        int n = s.size();

        int ones = 0 ;
        int zeroes = 0;

        for(int i = 0;i<n;i++){
            if(s[i]=='0'){
                zeroes++;
            }else{
                ones++;
            }
        }

        int answer = 0;

        for(int i = 0; i < s.size() ;i++){
            if(s[i]=='0'){
                if(ones==0){
                    answer=n-i;
                    break;
                }
                ones--;
            }else{
                if(zeroes == 0){
                    answer=n-i;
                    break;
                }
                zeroes--;
            }
        }
        cout<<answer<<endl;
    }
    return 0;
}