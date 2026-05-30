#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int rev=0;
    while(n>0){
        rev=rev*10+n%10;
        n/=10;
    }
    cout<<"The reverse of the number is: ";
    cout<<rev<<endl;
}