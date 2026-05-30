#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int dup = n;
    int rev=0;
    while(n>0){
        rev=rev*10+n%10;
        n/=10;
    }
    if(dup==rev){
        cout<<"The number is a palindrome."<<endl;
    }
    else{
        cout<<"The number is not a palindrome."<<endl;
    }
}