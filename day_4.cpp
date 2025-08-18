#include <iostream>
#include <algorithm>
using namespace std;

void mergeEasy(int arr1[], int arr2[], int m, int n) {
    for (int i = 0; i < m; i++) {
        if (arr1[i] > arr2[0]) {
            swap(arr1[i], arr2[0]);
            int first = arr2[0];
            int k = 1;
            while (k < n && arr2[k] < first) {
                arr2[k - 1] = arr2[k];
                k++;
            }
            arr2[k - 1] = first;
        }
    }
}

int main() {
    int m, n;
    cout << "Enter the size of 1st array: ";
    cin >> m;
    cout << "Enter the size of 2nd array: ";
    cin >> n;

    int arr1[m], arr2[n];

    cout << "Enter the elements of arr1: ";
    for (int i = 0; i < m; i++) cin >> arr1[i];

    cout << "Enter the elements of arr2: ";
    for (int i = 0; i < n; i++) cin >> arr2[i];

    mergeEasy(arr1, arr2, m, n);

    cout << "arr1 = ";
    for (int i = 0; i < m; i++) cout << arr1[i] << " ";
    cout << "\narr2 = ";
    for (int i = 0; i < n; i++) cout << arr2[i] << " ";
}
