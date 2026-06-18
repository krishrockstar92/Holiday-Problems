#include <bits/stdc++.h>
using namespace std;
int frequencyOfElement(vector<int>& arr, int target) {
    int count = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target) {
            count++;
        }
    }
    return count;
}

int main() {
    int n, target;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the target element to find frequency: ";
    cin >> target;

    int result = frequencyOfElement(arr, target);
    cout << "Frequency of the element: " << result << endl;

    return 0;
}