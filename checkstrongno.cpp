#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int temp=n, sum=0;
    while(temp>0){
        int digit = temp%10;
        int fact = 1;
        for(int i=1;i<=digit;i++){
            fact*=i; 
        }
        sum+=fact;
        temp/=10;
    }
    if(sum==n) cout<<n<<" is a strong number."<<endl;
    else cout<<n<<" is not a strong number."<<endl;
    return 0;
}