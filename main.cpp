#include <iostream>

#include "fruit.hpp"

int main () {
    auto x = fruit::apple;
    std::ostream & os = std::cout;
    constexpr auto iterations = 20U;

    os << "\npost-increment: ";
    for (auto ctr = 0U; ctr < iterations; ++ctr) {
        os << x++ << ' ';
    }

    os << "\npre-increment: ";
    for (auto ctr = 0U; ctr < iterations; ++ctr) {
        os << ++x << ' ';
    }
    os << '\n';
}
