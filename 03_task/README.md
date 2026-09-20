# Question№_1:

(a).

First, we need to convert the number 10.25 to its binary representation.
First, the integer part 10:
10 / 2 = 5, remainder 0
5 / 2 = 2, remainder 1
2 / 2 = 1, remainder 0
1 / 2 = 0, remainder 1

Therefore:
10 in decimal = 1010 in binary
Then, the fractional part:
0.25 * 2 = 0.5 -> 0
0.5 * 2 = 1.0 -> 1

Therefore:
0.25 in decimal = 0.01 in binary

As a result:

10.25 in decimal = 1010.01 in binary

Next, we will show how the number is stored in memory.
1 bit represents the sign, the next 8 bits represent the exponent, and the remaining 23 bits represent the mantissa.
Since our number is positive, the first bit is equal to zero.
1010.01 = 1.01001 * 2**3 => the true exponent is equal to 3

The bias for an 8-bit exponent = 127

=> the exponent in its binary representation is equal to:

bias + true exponent = 127 + 3 = 130
130 in binary representation: 10000010

Now we find the mantissa.
In the mantissa, we write only the fractional part. If there are fewer than 23 bits, we add zeros at the end. Therefore, our mantissa is: 01001000000000000000000

As a result, the 32-bit representation of the number 10.25 is:

01000001001001000000000000000000

(b).

First, we need to convert the number 7.1 to its binary representation.
First, the integer part 7:
7 / 2 = 3, remainder 1
3 / 2 = 1, remainder 1
1 / 2 = 0, remainder 1

Therefore:

7 in decimal = 111 in binary
Then, the fractional part:

0.1 * 2 = 0.2 -> 0
0.2 * 2 = 0.4 -> 0
0.4 * 2 = 0.8 -> 0
0.8 * 2 = 1.6 -> 1
0.6 * 2 = 1.2 -> 1
0.2 * 2 = 0.4 -> 0

From this sequence, we can see that the values start repeating, so this sequence is infinite.
Next, we will show how the number is stored in memory.
1 bit represents the sign, the next 8 bits represent the exponent, and the remaining 23 bits represent the mantissa.
Since our number is positive, the first bit is equal to zero.
111.000110011.... = 1.11000110011... * 2**2 => the true exponent is equal to 2

The bias for an 8-bit exponent = 127
=> the exponent in its binary representation is equal to:
bias + true exponent = 127 + 2 = 129
129 in binary representation: 10000001

Now we find the mantissa.
In the mantissa, we write only the fractional part. Since our fractional part is infinite, we round it to the nearest value that can be represented by float:
11000110011001100110011

As a result, the 32-bit representation of the number 7.1 is:

01000000111000110011001100110011

(c).

As shown in part (b), the number 7.1 cannot be represented exactly as a finite binary fraction. Therefore, when the number is stored as a float, it is rounded to the nearest representable value.
When the addition operation is performed, the result also has to be represented with the limited precision of the float type and is rounded.
Therefore, the result of 10.25f + 7.1f, printed using setprecision(12), may differ from the mathematically exact value of 17.35.

# Question№_2:

(a).

In the code, an example with the following numbers was shown:
a = 122222222.0f;
b = -122222222.0f;
c = 1.0f.

(a + b) + c = (122222222 + (-122222222)) + 1 = 0 + 1 = 1
a + (b + c) = 122222222 + (-122222222 + 1) = 0

In the second case, when b and c are added, the small value 1 is lost because the precision of float is not sufficient at this magnitude, so b + c is rounded to the same representable value as b, so the result becomes 0.

# Question№_3:

(a).

Let us consider the example from the code.
The problem is that 0.1 cannot be represented exactly as a finite binary fraction. float stores the nearest possible value.
That is why, if we add 0.1 ten times, the result will be different from the expected value.
The main consequence is that when comparing two numbers using conditional statements or ternary operators, the program may produce an incorrect result.

# Conclusion:

In this task, I learned how floating-point numbers are represented in memory using the IEEE 754 standard. 
I also learned that some decimal numbers cannot be represented exactly as binary floating-point numbers, which can lead to rounding errors. 
I demonstrated that floating-point addition does not always satisfy the associativity property and that comparing floating-point numbers using strict equality (==) can produce unexpected results.