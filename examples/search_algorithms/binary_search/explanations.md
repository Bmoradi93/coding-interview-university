## Binary search:
Binary search is a search algorithm that works by repeatedly dividing the search interval in half. It's an efficient algorithm that has a time complexity of O(log n), where n is the size of the input array. Binary search should be applied when the array has already been sorted. Otherwise you cannot use binary search. If you have a large quantity of queries, it would better to sort the array first, then apply binary search.

### Binary Search: Implementation using a sorted array

```
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
    int target = 5;
    int result = binarySearch(arr, target);
    if (result == -1) {
        std::cout << "Target not found\n";
    } else {
        std::cout << "Target found at index " << result << "\n";
    }
    return 0;
}
```

### Binary Search: Implementation using recursion

Binary search can also be implemented using recursion. Here's an example of binary search using recursion in C++:

```
#include <iostream>
#include <vector>

int binarySearchRecursive(std::vector<int> arr, int left, int right, int target) {
    if (left > right) {
        return -1; // Target not found
    }
    int mid = (left + right) / 2;
    if (arr[mid] == target) {
        return mid;
    } else if (arr[mid] < target) {
        return binarySearchRecursive(arr, mid + 1, right, target);
    } else {
        return binarySearchRecursive(arr, left, mid - 1, target);
    }
}

int main() {
    std::vector<int> arr = {1, 3, 5, 7, 9, 11};
    int target = 5;
    int result = binarySearchRecursive(arr, 0, arr.size() - 1, target);
    if (result == -1) {
        std::cout << "Target not found\n";
    } else {
        std::cout << "Target found at index " << result << "\n";
    }
    return 0;
}

```