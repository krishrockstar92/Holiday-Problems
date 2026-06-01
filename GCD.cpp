#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the numbers: ";
    cin>>a>>b;
    for(int i=min(a,b);i>=1;i--){
        if(a%i==0 && b%i==0){
            cout<<"GCD: "<<i<<endl;
            break;
        }
    }
    
}