## Recursion 
Recursion is a fundamental concept in computer science that involves solving problems by breaking them down into smaller, simpler sub-problems. Recursion is a powerful technique that can be used to solve problems in a wide range of areas, including computer graphics, artificial intelligence, data structures, algorithms, and programming languages.

In computer science, recursion is defined as a function or procedure that calls itself either directly or indirectly. When a function calls itself, it creates a new instance of itself on the stack, and the program continues executing the new instance until it returns a result to the original instance. The new instance may also call itself, creating another instance on the stack, and so on, until a base case is reached that does not call the function again.

Recursion is often used to solve problems that can be broken down into smaller sub-problems.

Here are some examples of recursive functions in C++:


* Factorial function:

```
int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n-1);
    }
}
```

* Fibonacci sequence:

```
int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return n;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

```

* Binary search:
 
```
int binarySearch(int arr[], int left, int right, int x) {
    if (right >= left) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x) {
            return mid;
        }
        if (arr[mid] > x) {
            return binarySearch(arr, left, mid - 1, x);
        }
        return binarySearch(arr, mid + 1, right, x);
    }
    return -1;
}
```

* Tower of Hanoi:

```
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) {
    if (n == 1) {
        cout << "Move disk 1 from rod " << from_rod << " to rod " << to_rod << endl;
        return;
    }
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    cout << "Move disk " << n << " from rod " << from_rod << " to rod " << to_rod << endl;
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}
```

Note that recursive functions can be useful for solving problems that have a recursive structure, where a problem can be broken down into smaller sub-problems that can be solved using the same algorithm as the original problem. However, care should be taken to ensure that recursive functions don't end up causing stack overflow due to excessive recursion.