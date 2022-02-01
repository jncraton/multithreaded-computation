Multithreaded Computation
=========================

This program demonstrates the performance improvements that are possible using multithreading.

The sample program prints the sum of all numbers between 0 and 1.6 billion exclusive.

A simple Python program to perform this task would be:

```python
total = 0

for i in range(0, 1600000000):
    total += i

print(total)
```

This program takes approximately 105 seconds to run on my system and correctly outputs 1279999999200000000.

A more Pythonic version might be:

```python
print(sum(range(0, 160000000)))
```

This version completes in 18 seconds.

A simple single-threaded C solution (`single.c`) is provided. This version should run much faster (~3.4 seconds on my system).

This program should be modified to perform the calculation using a selectable number of `THREADS` set by adjusting the value on line 5. If you are running the program on a system with a sufficient number of cores available, you should be able to see a significant speedup roughly proportional to the number of concurrent threads that can be processed.

You should not need any additional `#include` directives. It is expected that this program can be implemented using `pthreads`.

Mathematical Note
-----------------

A keen mathematician may note that this program is computationally excessive, as it could be replaced with the following using the formula for [Triangle Numbers](https://en.wikipedia.org/wiki/Triangular_number).

```
print(((1600000000-1)*1600000000) / 2)
```
