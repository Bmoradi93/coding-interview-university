## What is O notation:
Algorithmic complexity, also known as asymptotic complexity or "big-O" notation, is a measure of how the running time or space requirements of an algorithm grow as the size of the input data increases.

Big-O notation is used to express the upper bound of the growth rate of the algorithm, ignoring lower order terms and constants. For example, if an algorithm has a big-O complexity of O(n), it means that the running time or space requirements of the algorithm grow linearly with the size of the input data.

Common types of big-O complexity include:

O(1): constant time complexity, meaning that the running time or space requirements of the algorithm are constant, regardless of the size of the input data.
O(log n): logarithmic time complexity, meaning that the running time or space requirements of the algorithm grow logarithmically with the size of the input data.
O(n): linear time complexity, meaning that the running time or space requirements of the algorithm grow linearly with the size of the input data.
O(n log n): logarithmic-linear time complexity, meaning that the running time or space requirements of the algorithm grow logarithmically with the size of the input data, but with a linear factor.
O(n^2): quadratic time complexity, meaning that the running time or space requirements of the algorithm grow quadratically with the size of the input data.
O(2^n): exponential time complexity, meaning that the running time or space requirements of the algorithm grow exponentially with the size of the input data.
Analyzing the complexity of an algorithm is important because it helps us understand how the algorithm will perform on large inputs, and allows us to choose the most appropriate algorithm for a given problem. In general, algorithms with lower complexity are more efficient and scale better than algorithms with higher complexity, but choosing the optimal algorithm depends on the specific problem and constraints.