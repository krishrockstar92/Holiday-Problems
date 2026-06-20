#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count++] = arr[i]; // Move non-zero element to the front
        }
    }
    while (count < n) {
        arr[count++] = 0; // Fill the remaining positions with zeros
    }
    cout << "Array after moving zeros to the end: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}