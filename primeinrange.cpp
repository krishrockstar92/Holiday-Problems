#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the range: ";
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(i<=1){
            continue;
        }
        else{
            int a=0;
            for(int j=2;j<=sqrt(i);j++){
                if(i%j==0){
                    break;
                }
                a=1;
            }
            if(a==1){
                cout<<i<<" ";
            }
        }
    }
}