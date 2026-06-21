#include<bits/stdc++.h>
using namespace std;
int main(){
    // This program finds the missing number in an array of size n-1 containing distinct numbers from 1 to n.
    int n;
    cout << "Enter the array size: ";
    cin >> n;
    cout<< "Enter the elements of the array(1 less than the size):";
    vector<int> arr(n-1);
    for(int i=0;i<n-1;i++){
        cin >> arr[i];
    }
    int total_sum = n*(n+1)/2; 
    int sum=0;
    for(int i=0;i<n-1;i++){
        sum+=arr[i];
    }
    int missing_number = total_sum - sum;
    cout << "The missing number is: " << missing_number << endl;
    return 0;
}