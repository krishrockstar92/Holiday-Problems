#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the term number: ";
    cin>>n;
    int a=0,b=1,c;
    if(n==0) cout<<a<<endl;
    else if(n==1) cout<<b<<endl;
    else{
        for(int i=2;i<=n;i++){
            c=a+b;
            a=b;
            b=c;
        }
        cout<<"The "<<n<<"th term of Fibonacci series is: "<<c<<endl;
    }
}