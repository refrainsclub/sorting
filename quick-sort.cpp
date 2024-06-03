#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int>& nums, int lo, int hi) {
    int pivot = nums[hi];
    int index = lo - 1;

    for (int i = lo; i < hi; i++) {
        if (nums[i] <= pivot) {
            index++;
            swap(nums[i], nums[index]);
        }
    }

    index++;
    nums[hi] = nums[index];
    nums[index] = pivot;

    return index;
}

void quickSort(vector<int>& nums, int lo, int hi) {
    if (lo >= hi) {
        return;
    }

    int pivotIndex = partition(nums, lo, hi);

    quickSort(nums, lo, pivotIndex - 1);
    quickSort(nums, pivotIndex + 1, hi);
}

int main() {
    int n;
    cin >> n;

    // read numbers O(n)
    vector<int> nums;
    int num;

    for (int i = 0; i < n; i++) {
        cin >> num;
        nums.push_back(num);
    }

    // quck sort
    quickSort(nums, 0, nums.size() - 1);

    // print sorted numbers O(n)
    for (int n: nums) {
        cout << n << " ";
    }

    cout << endl;
}
