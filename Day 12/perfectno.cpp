#include<bits/stdc++.h>
using namespace std;
bool perfect(int n){
    int sum=0;
    for(int i=1; i<n; i++){
        if(n%i==0){
            sum+=i;
        }
    }
    return sum==n;
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>> n;
    if(perfect(n)){
        cout<< n<< " is a perfect number.";
    }
    else{
        cout<< n<< " is not a perfect number.";
    }
    return 0;
}