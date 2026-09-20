        Type           Operation           Arithmetic (time)      Bitwise (time)
     int32_t            Division by 2                151038             86122.6
     int32_t      Multiplication by 2               70644.4             74106.8
     int32_t                   Parity               62986.7             63103.7
    uint32_t            Division by 2                152434             76631.9
    uint32_t      Multiplication by 2               76719.4             88680.8
    uint32_t                   Parity               60470.9             59417.2


According to the obtained results, bitwise operations are not always faster than arithmetic operations.

For division by 2, the bitwise operation x >> 1 was significantly faster than x / 2 for both int32_t and uint32_t.
This happens because we declared our divisor as volatile, so compiler can not simply optimize division.

For multiplication by 2, the arithmetic operation x * 2 was slightly faster than x << 1 in my measurements.
I think that this happens because compiler can optimize multiplication by any constant, so bitwise operation does not have an advantage in time.

For the parity check, the results of x % 2 == 0 and (x & 1) == 0 were almost the same.
Since the divisor is the constant 2, the compiler can optimize the parity check efficiently. 
So x % 2 == 0 and (x & 1) == 0 may have very similar execution times.

# Conclusion: 

In this task, I compared the execution time of arithmetic and bitwise operations for int32_t and uint32_t. 
The results showed that bitwise operations are not always faster than arithmetic operations.
I also learned that the performance of operations depends on compiler optimizations and the data type used.