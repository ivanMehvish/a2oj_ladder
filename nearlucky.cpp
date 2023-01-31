#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int four=0;
    int seven=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='7'){
            seven++;
        }
        else if(s[i]=='4'){
            four++;
        }
    }
    if(seven+four==7 || seven+four==4){
            cout<<"YES";
    }
    else cout<<"NO";
}