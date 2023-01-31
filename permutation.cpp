#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>p;
    if(n%2!=0){
        cout<<-1;
    }
    else{
        for(int i=1; i<=n; i++){
            p.push_back(i);
        }
        int temp=0;
        for(int i=0; i<n; i++){
        temp=p[i];
        p[i]=p[i+1];
        p[i+1]=temp;
        i++;
        }
        for(int i=0; i<n; i++){
            cout<<p[i]<<" ";
        }
    }
}