# COSC2030_Lab3
## Problem 1 and 2.

Short overflow occurred at n = 257, resulting in sum = -32640
Overflow detected by checking for negative result.

## Problem 3.

Long overflow occurred at n = 65537, resulting in sum -2147450880

## Problem 4.

Float factorial overflow occurred at n = 36, resulting in product = inf
Overflow detected by checking if previous result is equal to current result.

## Problem 5.

Double factorial overflow occurred at n = 172, resulting in product = inf

## Problem 6.

Expected result is zero for every n.
We do not get zero, because the quotient 1/n is not exact, thus their sum is not exactly 1. This results in results slightly above 0.

## Problem 7.

The numeric error occurs for similar reasons as in problem 6. The imprecision of the floating point operations results in the value of i being slightly less than 4.4, thus 4.4 still displays.

## Problem 8.

When double is used, 4.4 does not display because doubles are much more precise than floats. The error resulting from the operations is less than machine epsilon resulting in accurate comparison.
