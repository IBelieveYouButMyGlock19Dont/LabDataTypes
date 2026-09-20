#include <iostream>
#include <iomanip>

int main() {
    // 1.Number representation
    float x=10.25f;
    float y=7.1f;
    std::cout << x << std::endl;
    std::cout << y << std::endl;
    std::cout << std::setprecision(12) << x+y << std::endl;
    // 2.Violation of associativity
    float a=122222222.0f;
    float b=-122222222.0f;
    float c=1.0f;
    std::cout << (a+b)+c << std::endl;
    std::cout << a+(b+c) << std::endl;
    // 3.Comparing floating-point numbers for equality
    float q=0.1f+0.1f+0.1f+0.1f+0.1f+0.1f+0.1f+0.1f+0.1f+0.1f;
    float w=1.0f;
    std::cout << std::setprecision(12) << q << std::endl;
    std::cout << std::setprecision(12) << w << std::endl;
    std::cout << (q==w) << std::endl;
    return 0;
}