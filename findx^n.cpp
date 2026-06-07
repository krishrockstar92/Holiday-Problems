#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Enter the power: ";
    cin>>x;
    int result=1;
    for(int i=0; i<x; i++){
        result*=n;
    }
    cout<<n<<" raised to the power "<<x<<" is "<<result<<endl;
    return 0;
}
