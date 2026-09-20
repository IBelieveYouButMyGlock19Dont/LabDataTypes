#include <iostream>
#include <chrono>
#include <cstdint>
#include <iomanip>

int main() {
    const size_t N=100000000;
    double IntDivision;
    double IntBitwiseDivision;
    double IntMultiplication;
    double intBitwiseMultiplication;
    double intParity;
    double intParityBitwise;
    double uintDivision;
    double uintBitwiseDivision;
    double uIntMultiplication;
    double uintBitwiseMultiplication;
    double uintParity;
    double uintParityBitwise;
    {
        volatile int32_t x=123456789;
        volatile int32_t divisor = 2;
        auto start = std::chrono::high_resolution_clock::now();
        for (size_t i=0; i<N; ++i) {
            x=123456789;
            x=x/divisor;
        }
        auto end = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration<double, std::micro>(end - start);
        IntDivision = duration.count();
    }
    {
        volatile int32_t x=123456789;
        auto start = std::chrono::high_resolution_clock::now();
        for (size_t i=0; i<N; ++i) {
            x=123456789;
            x=x>>1;
        }
        auto end = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration<double, std::micro>(end - start);
        IntBitwiseDivision = duration.count();
    }
    {
        volatile int32_t x=123456789;
        auto start = std::chrono::high_resolution_clock::now();
        for (size_t i = 0; i<N;++i) {
            x=123456789;
            x=x*2;
        }
        auto end = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration<double, std::micro>(end - start);
        IntMultiplication = duration.count();
    }
    {
        volatile int32_t x=123456789;
        auto start = std::chrono::high_resolution_clock::now();
        for (size_t i = 0; i<N; ++i) {
            x=123456789;
            x=x<<1;
        }
        auto end = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration<double, std::micro>(end - start);
        intBitwiseMultiplication = duration.count();
    }
    {
        volatile int32_t x=123456789;
        volatile bool result;
        auto start = std::chrono::high_resolution_clock::now();
        for (size_t i = 0; i<N; ++i) {
            x = 123456789;
            result = (x%2==0);
        }
        auto end = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration<double, std::micro>(end - start);
        intParity = duration.count();
    }
    {
        volatile int32_t x=123456789;
        volatile bool result;
        auto start = std::chrono::high_resolution_clock::now();
        for (size_t i = 0; i<N; ++i) {
            x = 123456789;
            result = ((x&1)==0);
        }
        auto end = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration<double, std::micro>(end - start);
        intParityBitwise = duration.count();
    }
    {
        volatile uint32_t x=123456789U;
        volatile uint32_t divisor=2U;
        auto start = std::chrono::high_resolution_clock::now();
        for (size_t i = 0; i<N; ++i) {
            x=123456789U;
            x=x/divisor;
        }
        auto end = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration<double, std::micro>(end - start);
        uintDivision = duration.count();
    }
    {
        volatile uint32_t x=123456789U;
        auto start = std::chrono::high_resolution_clock::now();
        for (size_t i = 0; i<N; ++i) {
            x=123456789U;
            x=x>>1;
        }
        auto end = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration<double, std::micro>(end - start);
        uintBitwiseDivision= duration.count();
    }
    {
        volatile uint32_t x=123456789U;
        auto start = std::chrono::high_resolution_clock::now();
        for (size_t i = 0; i<N; ++i) {
            x=123456789U;
            x=x*2;
        }
        auto end = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration<double, std::micro>(end - start);
        uIntMultiplication= duration.count();
    }
    {
        volatile uint32_t x = 123456789U;
        auto start = std::chrono::high_resolution_clock::now();
        for (size_t i = 0; i<N; ++i) {
            x=123456789U;
            x=x<<1;
        }
        auto end = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration<double, std::micro>(end - start);
        uintBitwiseMultiplication=duration.count();
    }
    {
        volatile uint32_t x=123456789U;
        volatile bool result;
        auto start = std::chrono::high_resolution_clock::now();
        for (size_t i = 0; i<N; ++i) {
            x = 123456789U;
            result = (x%2==0);
        }
        auto end = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration<double, std::micro>(end - start);
        uintParity=duration.count();
    }
    {
        volatile uint32_t x=123456789U;
        volatile bool result;
        auto start = std::chrono::high_resolution_clock::now();
        for (size_t i = 0; i<N; ++i) {
            x = 123456789U;
            result = ((x&1)==0);
        }
        auto end = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration<double, std::micro>(end - start);
        uintParityBitwise=duration.count();
    }
    std::cout << std::setw(12) << "Type"
              << std::setw(20) << "Operation"
              << std::setw(28) << "Arithmetic (time)"
              << std::setw(20) << "Bitwise (time)"
              << std::endl;
    std::cout << std::setw(12) << "int32_t"
              << std::setw(25) << "Division by 2"
              << std::setw(22) << IntDivision
              << std::setw(20) << IntBitwiseDivision
              << std::endl;
    std::cout << std::setw(12) << "int32_t"
              << std::setw(25) << "Multiplication by 2"
              << std::setw(22) << IntMultiplication
              << std::setw(20) << intBitwiseMultiplication
              << std::endl;
    std::cout << std::setw(12) << "int32_t"
              << std::setw(25) << "Parity"
              << std::setw(22) << intParity
              << std::setw(20) << intParityBitwise
              << std::endl;
    std::cout << std::setw(12) << "uint32_t"
              << std::setw(25) << "Division by 2"
              << std::setw(22) << uintDivision
              << std::setw(20) << uintBitwiseDivision
              << std::endl;
    std::cout << std::setw(12) << "uint32_t"
              << std::setw(25) << "Multiplication by 2"
              << std::setw(22) << uIntMultiplication
              << std::setw(20) << uintBitwiseMultiplication
              << std::endl;
    std::cout << std::setw(12) << "uint32_t"
              << std::setw(25) << "Parity"
              << std::setw(22) << uintParity
              << std::setw(20) << uintParityBitwise
              << std::endl;
    return 0;
}

