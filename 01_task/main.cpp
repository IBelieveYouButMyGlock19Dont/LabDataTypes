#include <iostream>
#include <cstdint>

void print_bits(uint32_t number) {
    std::cout << ((number>>31) & 1);
    std::cout << ((number>>30) & 1);
    std::cout << ((number>>29) & 1);
    std::cout << ((number>>28) & 1);
    std::cout << ((number>>27) & 1);
    std::cout << ((number>>26) & 1);
    std::cout << ((number>>25) & 1);
    std::cout << ((number>>24) & 1);
    std::cout << ((number>>23) & 1);
    std::cout << ((number>>22) & 1);
    std::cout << ((number>>21) & 1);
    std::cout << ((number>>20) & 1);
    std::cout << ((number>>19) & 1);
    std::cout << ((number>>18) & 1);
    std::cout << ((number>>17) & 1);
    std::cout << ((number>>16) & 1);
    std::cout << ((number>>15) & 1);
    std::cout << ((number>>14) & 1);
    std::cout << ((number>>13) & 1);
    std::cout << ((number>>12) & 1);
    std::cout << ((number>>11) & 1);
    std::cout << ((number>>10) & 1);
    std::cout << ((number>>9) & 1);
    std::cout << ((number>>8) & 1);
    std::cout << ((number>>7) & 1);
    std::cout << ((number>>6) & 1);
    std::cout << ((number>>5) & 1);
    std::cout << ((number>>4) & 1);
    std::cout << ((number>>3) & 1);
    std::cout << ((number>>2) & 1);
    std::cout << ((number>>1) & 1);
    std::cout << ((number>>0) & 1);
}

int main() {
    int x=42;
    print_bits(x);
    std::cout << std::endl;
    int a=42;
    int b=-17;
    std::cout << "a&b: " << (a&b) << std::endl;
    std::cout << "a|b: " << (a|b) << std::endl;
    std::cout << "a^b: " << (a^b) << std::endl;
    std::cout << "~a: " << (~a) << std::endl;
    std::cout << "a<<2: " << (a<<2) << std::endl;
    std::cout << "a>>2: " << (a>>2) << std::endl;
    std::cout << "b<<2: " << (b<<2) << std::endl;
    std::cout << "b>>2: " << (b>>2) << std::endl;
    return 0;
}