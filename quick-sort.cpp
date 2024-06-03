#include <iostream>

using namespace std;

int partition(int arr[], int lo, int hi) {
    int pivot = arr[hi];
    int idx = lo - 1;

    for (int i = lo; i < hi; i++) {
        if (arr[i] <= pivot) {
            idx++;
            swap(arr[i], arr[idx]);
        }
    }

    idx++;
    arr[hi] = arr[idx];
    arr[idx] = pivot;

    return idx;
}

void quickSort(int arr[], int lo, int hi) {
    if (lo >= hi) {
        return;
    }

    int pivotIdx = partition(arr, lo, hi);

    quickSort(arr, lo, pivotIdx - 1);
    quickSort(arr, pivotIdx + 1, hi);
}

void readArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    readArray(arr, n);
    quickSort(arr, 0, n - 1);
    printArray(arr, n);
}
