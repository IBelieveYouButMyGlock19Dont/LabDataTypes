# Question №_1:

uint32_t can store all numbers in the range [0; 2**32 - 1].
UINT32_MAX is the number 2**32 - 1 (the upper bound).
At the same time, 2**32 - 1 = 4294967295.
In 32-bit representation, the number 4294967295 is: 11111111111111111111111111111111.
When we add 2 to UINT32_MAX, the following happens:

  11111111111111111111111111111111 (2**32 - 1)
+
  00000000000000000000000000000010 (2)
 ---------------------------------
 1 00000000000000000000000000000001

We get that to represent the number equivalent to UINT32_MAX + 2, we need 33 bits, while uint32_t can store only 32 bits. Because of this, overflow occurs.
Therefore, this additional most significant bit is not included in the 32-bit result. The lower 32 bits remain: 00000000000000000000000000000001, which is equivalent to 1 in decimal representation. 
Therefore, the result is equal to one.

# Question №_2:

int32_t can store all numbers in the range [-2**31; 2**31 - 1].
INT32_MAX is the number 2**31 - 1 (the upper bound).
At the same time, 2**31 - 1 = 2147483647.
In 32-bit representation, the number 2147483647 is: 01111111111111111111111111111111.
When we add 2 to INT32_MAX, the following happens:

  01111111111111111111111111111111 (2**31 - 1)
+
  00000000000000000000000000000010 (2)
 ----------------------------------
  10000000000000000000000000000001 (-2147483647)

The resulting value is the 32-bit representation of the number -2147483647 in two's complement. 
However, the mathematical result 2147483647 + 2 = 2147483649 is outside the range of int32_t. 
Therefore, signed integer overflow occurs. Therefore, the standard does not guarantee that the result will be -2147483647.

# Question №_3:

For the unsigned type, the result will be predictable; we know what result we will get if we go outside the allowed range.
Unlike unsigned, for signed overflow the standard does not define such a cyclic rule. A result outside the allowed range leads to undefined behavior.

# Question №_4:

C++ standard says that, if the result of an arithmetic operation on a signed integer cannot be represented by the corresponding type, undefined behavior occurs. 
This means that the C++ standard does not define what the result of such an operation should be. 
Therefore, we cannot assume that after INT32_MAX the value will necessarily wrap around to INT32_MIN, as it did with UINT32_MAX.

# Conclusion:

In this task, I investigated integer overflow for signed and unsigned 32-bit integers. 
I learned that unsigned integer arithmetic works modulo 2^32, so its overflow behavior is defined and predictable. 
In contrast, signed integer overflow results in undefined behavior in C++, so we cannot rely on a particular result when the value goes outside the allowed range.