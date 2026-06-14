#include<bits/stdc++.h>
using namespace std;
int palindrome(int n){
    int rn=0,ld=0;
    while(n>0){
        ld=n%10;
        rn=rn*10+ld;
        n=n/10;
    }
    return rn;
}
int main(){
    int n;
    cout<<"Enter the number:";
    cin>> n;
    cout<<"Palindrome of "<< n<< " is:"<< palindrome(n);
}