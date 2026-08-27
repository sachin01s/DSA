#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int del = 0;
    int count = 0;
    for(int i = 0;i<s.size();i++){
        if(s[i] == 'x'){
            count++;
            if(count>2){
                del++;
                count=2;
            }
        }else count = 0;
    }
    cout<<del<<endl;
    return 0;
}