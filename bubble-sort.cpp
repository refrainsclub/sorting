#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    // read numbers O(n)
    int nums[n];
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // bubble sort O(n^2)
    int tmp;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (nums[i] > nums[j]) {
                tmp = nums[i];
                nums[i] = nums[j];
                nums[j] = tmp;
            }
        }
    }

    // print sorted numbers O(n)
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    cout << endl;
}
