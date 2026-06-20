#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,d;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    cout << "Enter the number of positions to rotate right: ";
    cin >> d;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    d = d % n; 
    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin() + d);
    reverse(arr.begin() + d, arr.end());
    cout << "Array after right rotation: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}