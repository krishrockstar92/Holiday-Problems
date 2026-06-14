#include<bits/stdc++.h>
using namespace std;
bool armstrong(int n){
    int sum=0,ld=0,temp=n;
    int numDigits=to_string(n).length(); // Get the number of digits in n
    while(temp>0){
        ld=temp%10;
        sum+=pow(ld,numDigits);
        temp=temp/10;
    }
    return sum==n;
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>> n;
    if(armstrong(n)){
        cout<< n<< " is an armstrong number.";
    }
    else{
        cout<< n<< " is not an armstrong number.";
    }
    return 0;
}