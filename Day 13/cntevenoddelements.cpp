#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,cnt1=0,cnt2=0;
    cout<<"Enter Array length: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            cnt1++;
        }
        else{
            cnt2++;
        }
    }
    cout<<"Number of even elements: "<< cnt1<< endl;
    cout<<"Number of odd elements: "<<cnt2<< endl;
}