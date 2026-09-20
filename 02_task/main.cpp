#include <iostream>
#include <cstdint>

int main() {
    uint32_t x = UINT32_MAX;
    int32_t y = INT32_MAX;
    std::cout << "UINT32_MAX + 2: " << x+2 << std::endl;
    std::cout << "INT32_MAX + 2: " << y+2 << std::endl;
    return 0;
}