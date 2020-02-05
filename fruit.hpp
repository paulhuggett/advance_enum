#ifndef FRUIT_HPP
#define FRUIT_HPP

#include <iosfwd>

#define FRUIT_VALUES                                                                               \
    X (apple)                                                                                      \
    X (banana)                                                                                     \
    X (lemon) \
    X (orange)                                                                                     \
    XLAST (pineapple)
#define XLAST(x) X (x)

#define X(x) x,
    enum class fruit { FRUIT_VALUES };
#undef X

std::ostream & operator<< (std::ostream & os, fruit const f);

fruit & operator++ (fruit & f) noexcept;
fruit operator++ (fruit & f, int) noexcept;

#endif // FRUIT_HPP
