#include <iostream>
#include <vector>

int binarySearch(std::vector<int> arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1; // Target not found
}

int main() {
    std::vector<int> arr = {1, 3, 5, 7, 9, 11};
    int target = 2;
    int result = binarySearch(arr, target);
    if (result == -1) {
        std::cout << "Target not found\n";
    } else {
        std::cout << "Target found at index " << result << "\n";
    }
    return 0;
}