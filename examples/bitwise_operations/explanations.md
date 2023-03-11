## Bit manipulatin 
In computer programming, bitwise operators are used to manipulate individual bits of binary numbers. Here are the most common bitwise operators and what they do:

* AND operator (&): This operator sets each bit to 1 if both bits are 1, otherwise it sets the bit to 0. For example, 5 & 3 will produce 1, because:

```
0101 (5 in binary) & 0011 (3 in binary) = 0001 (1 in binary)
```

* OR operator (|): This operator sets each bit to 1 if either bit is 1, otherwise it sets the bit to 0. For example, 5 | 3 will produce 7, because:

```
0101 (5 in binary) | 0011 (3 in binary) = 0111 (7 in binary)
```

* XOR operator (^): This operator sets each bit to 1 if only one of the two bits is 1, otherwise it sets the bit to 0. For example, 5 ^ 3 will produce 6, because:

```
0101 (5 in binary) ^ 0011 (3 in binary) = 0110 (6 in binary)
```


* NOT operator (~): This operator flips all the bits in a number. For example, ~5 will produce -6 (assuming we are working with 32-bit integers), because:

```
0000 0000 0000 0000 0000 0000 0000 0101 (5 in binary)
= 1111 1111 1111 1111 1111 1111 1111 1010 (complement of 5)
= 1111 1111 1111 1111 1111 1111 1111 1011 (-6 in binary, two's complement representation)
```

* Right shift operator (>>): This operator shifts the bits of a number to the right by a certain number of positions. For example, 5 >> 1 will produce 2, because:

```
0101 (5 in binary) >> 1 = 0010 ((2 in binary))

```

* Left shift operator (<<): This operator shifts the bits of a number to the left by a certain number of positions. For example, 5 << 1 will produce 10, because:

```
0101 (5 in binary) << 1 = 1010 (10 in binary)

```

Note that when you shift a number to the left, the value of the number is multiplied by 2 for each position you shift it. Similarly, when you shift a number to the right, the value of the number is divided by 2 for each position you shift it.

## Word (computer architecture)
In computer architecture, a word is a fixed-size unit of data that is processed as a single entity by the computer's processor. The size of a word is determined by the number of bits that the processor can process at once, which is referred to as the word size.

The word size can vary depending on the architecture of the computer. For example, early computers had word sizes of 8 bits, while modern computers typically have word sizes of 32 or 64 bits. Some specialized computers may have larger word sizes, such as supercomputers that can process 128 or 256 bits at a time.

The word size determines several important characteristics of the computer's architecture, including the size of the memory addresses that the processor can access, the maximum amount of memory that can be addressed, and the maximum value that can be stored in a single memory location. A larger word size generally allows for faster processing of data and larger addressable memory space, but may also require more memory to store the same amount of data.

In programming, the size of a word is often used to define the size of data types, such as integers or floating-point numbers. For example, a 32-bit integer is a data type that occupies one word in a computer's memory, while a 64-bit integer occupies two words. The word size also affects how data is stored and manipulated in memory, and can have an impact on the performance and efficiency of a program.

* 1’s complement of a binary number is another binary number obtained by toggling all bits in it, i.e., transforming the 0 bit to 1 and the 1 bit to 0. Examples:

```
Let numbers be stored using 4 bits

1's complement of 7 (0111) is 8 (1000)
1's complement of 12 (1100) is 3 (0011)
```


* 2’s complement of a binary number is 1 added to the 1’s complement of the binary number. Examples:

```
Let numbers be stored using 4 bits

2's complement of 7 (0111) is 9 (1001)
2's complement of 12 (1100) is 4 (0100)
```