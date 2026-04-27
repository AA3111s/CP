
# Notes for LuvCP

## Lec - 9

### Compilation error: when there is a syntax error

### Memory limit exceeded error: when the user uses up more than the provided amount of memory

- usually due to declaration of large arrays

### Runtime error/Segmentation fault: illegal access of memory

- wrong use of pointers
- accessing memory that does not exist
- caused by undefined behaviour like division by 0

- check for what are you accessing in your arrays
- check for division by 0

### Time limit exceeded error

a.cpp is given to gcc and a.out file is formed which is given the input and is then executed for the output.

the process of conversion of a.cpp to a.out is **compilation** while the process of giving input to getting an output is called **execution.** And the time taken by the respective processes are called **Compilation Time** and **Execution Time** respectively.

`<bits/stdc++.h>` increases the compile time and not the execution time and all the time limits given on contest websites are execution time limits.

## Lec - 10

### Number of iterations in 1 sec: 10^7 - 10^8

- 10^8 iterations = 10s
- 10^9 iterations = 100s
- 10^10 iterations = 1000s (or 15 mins)
- ...

- O(n) + O(n) = O(n)
- O(n) x O(n) = O(n^2)

## Lec - 11

### Modular Formulas

- (a + b) % m = ((a % m) + (b % m)) % m
- (a *b) % m = ((a % m)* (b % m)) % m
- (a - b) % m = ((a % m) - (b % m) + m) % m
- (a / b) % m = ((a % m) * ((b^-1) %  m)) % m

- usually M = 10^9 + 7
- a prime close to the limit of integer datatype
- multiplicative inverse, since 10^9 + 7 is prime therefore it makes it easier for us to find the multiplicative inverse of numbers as we cannot find the MMI for normal numbers.

## Lec - 12

### Precomputation Techniques

- added factorial.cpp code with precomputing the factorial values

### Hashing:

- any global arrays are intialized 0
- we can hash only when array's maximum given size is 10^7

1. How to map negative numbers?
- by directly using STL, maps or unorderered maps

- or by converting all numbers positive by adding the least negative number's absolute value to all values 
- then hashing for the same 
- then while giving the count we will add 6 to the element and give the count of that element


## Lec - 13

### Prefix-sum in 1D/2D arrays:

- 