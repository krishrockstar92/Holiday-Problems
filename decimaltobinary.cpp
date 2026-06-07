#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a decimal number: ";
    cin>>n;
    int binary = 0, base = 1;
    while(n > 0){
        int remainder = n % 2;
        binary += remainder * base;
        base *= 10;
        n /= 2;
    }
    cout<<"Binary equivalent: "<<binary<<endl;
    return 0;
}