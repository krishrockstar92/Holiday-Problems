#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    for(int i=65;i<65+n;i++){
        for(int j=65;j<130+n-i;j++){
            cout<<" ";
        }
        for(int k=65;k<=(2*i-1)/2+1;k++){
            cout<<char(k);
        }
        for(int l=(2*i-1)/2; l>=65; l--){
            cout<<char(l);
        }
        cout<<endl;
    }

}