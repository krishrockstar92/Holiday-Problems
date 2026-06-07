#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,cnt=0;
    cout<<"Enter a number: ";
    cin>>n;
    while(n>0){
        if(n%2==1) cnt++;
        n/=2;
    }
    cout<<"Number of set bits: "<<cnt<<endl;
    return 0;
}