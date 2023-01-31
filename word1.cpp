#include <bits/stdc++.h>
using namespace std;

int main()
{   int upper=0;
    int lower=0;
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++){
        if(isupper(s[i])){
            upper++;
        }
        else if(islower(s[i])){
            lower++;
        }
    }
    if(upper==lower){
       transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout<<s<<endl;
    }
     else if(upper>lower){
      transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout<<s<<endl;
     }
    else if(lower>upper){
       transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout<<s<<endl;
    }
    
}
