#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, d;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    cout << "Enter the number of positions to rotate left: ";
    cin >> d;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    d = d % n; // Handle cases where d is greater than n
    reverse(arr.begin(), arr.begin() + d);
    reverse(arr.begin() + d, arr.begin() + n); //arr.end() can also be used instead of arr.begin() + n
    reverse(arr.begin(), arr.begin() + n);

    cout << "Array after left rotation: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}