#include<bits/stdc++.h>
using namespace std;
int main(){
    int lower, upper;
    cout<<"Enter the lower and upper limits: ";
    cin>>lower>>upper;
    cout<<"Armstrong numbers between "<<lower<<" and "<<upper<<": ";
    for(int i=lower; i<=upper; i++){
        int sum=0, temp=i;
        while(temp!=0){
            int digit = temp%10;
            sum += digit*digit*digit;
            temp /= 10;
        }
        if(sum==i) cout<<i<<" ";
    }
    cout<<endl;
}