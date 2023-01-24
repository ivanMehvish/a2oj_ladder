#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    string s2;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='-'&& s[i+1]=='-'){
            s2.push_back('2');
          i++;
        }
        else if(s[i]=='-' && s[i+1]=='.'){
            s2.push_back('1');
          i++;
        }
        else if(s[i]=='.'){
            s2.push_back('0');
        }
    }
    cout<<s2<<endl;
}
