#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    int r=1;
    for(int i=1;i<=n;i++){
        r=r*i;
    }
    return r;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Factorial of "<<n<<" is "<<factorial(n)<<endl;
    return 0;
}