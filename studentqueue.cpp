#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, t;
    cin>>n>>t;
    string s;
    cin>>s;
    for(int i=0; i<t; i++){
        for(int j=1; j<n; j++){
            if(s[j-1]=='B' && s[j]=='G'){
                s[j-1]='G';
                s[j]='B';
                j++; //idhar galat tha
            }
            
        }
    }
    cout<<s<<endl;
}