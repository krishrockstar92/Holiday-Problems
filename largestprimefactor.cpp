#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int largestprime=-1;
    int dup = n;
    // remove all factors of 2
    while(n%2==0){
        largestprime=2;
        n/=2;
    }
    // check for odd factors
    for(int i=3; i<=sqrt(n); i+=2){
        while(n%i==0){
            largestprime=i;
            n/=i;
        }
    }
    // if n is a prime number greater than 2
    if(n>2) largestprime=n;
    cout<<"Largest prime factor of "<<dup<<" is "<<largestprime<<endl;
    return 0;
}