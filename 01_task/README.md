# Question №_1:

Before each bitwise operation, we represent the numbers a and b in binary.
For the AND (&) operation, we "multiply" the corresponding bits of the two numbers. 1 is obtained only in the case of 1 & 1; in all other cases, the result is 0.
For the OR (|) operation, we "add" the corresponding bits of the two numbers. 0 is obtained only in the case of 0 | 0; in all other cases, the result is 1.
For the XOR (^) operation, the result is 1 if the corresponding bits are different (0 and 1 or 1 and 0). If the bits are the same, the result is 0.
For the NOT (~) operation, each bit of the number is changed to its opposite: 0 is changed to 1, and 1 is changed to 0.
For the a >> 2 and b >> 2 operations, all bits of the number are shifted two positions to the right.
For the a << 2 and b << 2 operations, all bits of the number are shifted two positions to the left.

a=00000000000000000000000000101010
b=11111111111111111111111111101111

Examples:

For AND (&):

  00000000000000000000000000101010  (42)
 &
  11111111111111111111111111101111  (-17)
  ----------------------------------
  00000000000000000000000000101010   (42)

For OR (|):

  00000000000000000000000000101010  (42)
 |
  11111111111111111111111111101111  (-17)
  ----------------------------------
  11111111111111111111111111101111  (-17)

For XOR (^):

  00000000000000000000000000101010  (42)
 ^
  11111111111111111111111111101111  (-17)
  ----------------------------------
  11111111111111111111111111000101  (-59)

For NOT (~):

 00000000000000000000000000101010 (42)

 11111111111111111111111111010101 (-43)

For (>>):

 00000000000000000000000000101010  (42)
⠀>>2
 00000000000000000000000000001010  (10)


 11111111111111111111111111101111  (-17)
⠀>> 2
 11111111111111111111111111111011  (-5)

For (<<):

 00000000000000000000000000101010   (42)
⠀<< 2
 00000000000000000000000010101000   (168)


 11111111111111111111111111101111   (-17)
⠀<< 2
 11111111111111111111111110111100   (-68)

# Question №_2:

To represent -1 in 32 bits, we first need to represent 1 in 32 bits, then replace 0 with 1 and 1 with 0, and also add 1.
That is, the general formula is: -1=~1+1
1 in 32-bit representation: 00000000000000000000000000000001
~1 in 32-bit representation: 11111111111111111111111111111110
~1+1: 11111111111111111111111111111111

Answer: 11111111111111111111111111111111

Sign-magnitude:
In this representation, the first bit indicates the sign: 0 means positive, 1 means negative, and the remaining 31 bits represent the number itself.

For -1: 10000000000000000000000000000001

One's complement:
In this representation, if we want to represent a negative number, all 32 bits are changed to their opposites.

For -1: 11111111111111111111111111111110

Two's complement:
In this representation, if we want to represent a negative number, all 32 bits are changed to their opposites, and then we add 1.

For -1: 11111111111111111111111111111111

# Question №_3:

Two's complement is a way of representing signed integers. To represent a negative number, we take its positive value, invert all the bits, and add 1. 
It was introduced to simplify arithmetic operations in computers. With two's complement, the same binary addition operation can be used for both positive and negative numbers. 
It also has only one representation of zero, unlike sign-magnitude and one's complement.

# Question №_4:

Negative signed integers are represented using two's complement, where the most significant bit is 1. 
When a negative number is shifted to the right, the empty positions on the left are filled with ones. 
Therefore, the most significant bit remains 1 and the result remains negative.

In example that was mentioned before:

11111111111111111111111111101111   (-17)
⠀>> 2
11111111111111111111111111111011   (-5)

# Conclusion:

In this task, I learned how integers are represented in binary form and how bitwise operations work. 
I also learned how negative numbers are represented using two's complement. 
I investigated AND, OR, XOR, NOT, and bit shifts and saw how these operations change individual bits.