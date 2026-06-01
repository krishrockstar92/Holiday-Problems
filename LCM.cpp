#include<bits/stdc++.h>
using namespace std;
int lcm(int a,int b){
    return (a*b)/__gcd(a,b); 
}
int main(){
    int a,b;
    cout<<"Enter the numbers: ";
    cin>>a>>b;
    cout<<"LCM: "<<lcm(a,b)<<endl;
}