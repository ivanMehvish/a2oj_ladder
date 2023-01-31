#include <bits/stdc++.h>
using namespace std;

int main(){
    int mat[5][5];
    int step=0,ver=0,hz=0;
    int r=0,c=0;
    for(int i=0; i<5; i++){ //input
        for(int j=0; j<5;j++){
            cin>>mat[i][j];
        }
    }
    //search for 1 index
    for(int i=0; i<5; i++){ 
        for(int j=0; j<5;j++){
            if(mat[i][j]==1){
                r=i+1;
                c=j+1;
            }
        }
    }
    ver=abs(3-r);
    hz= abs(3-c);
    step=ver+hz;
    cout<<step<<endl;
        
    
    
}