#include <bits/stdc++.h>
using namespace std;


int main(){
    int np=0;
    int n,m;
    std::cin>>n>>m;
    for(int i=n+1; i<=50; i++){
        int count=0;
        for(int j=1; j<=50; j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==2){
                np=i;
                break;
            }
    }
    if(np==m){
        std::cout<<"YES";
    }
    else std::cout<<"NO";
    
    
}