#include "fruit.hpp"

#include <ostream>

#include "advance_enum.hpp"

#define X(x)                                                                                       \
    case fruit::x:                                                                                 \
        str = #x;                                                                                  \
        break;
    std::ostream & operator<< (std::ostream & os, fruit const f) {
        auto str = "";
        switch (f) { FRUIT_VALUES }
        return os << str;
    }
#undef X

#undef XLAST
#define X(x) fruit::x,
#define XLAST(x) fruit::x
    // pre-increment
    fruit & operator++ (fruit & f) noexcept {
        return f = enum_values<fruit, FRUIT_VALUES>::advance (f);
    }
#undef X
#undef XLAST
#define XLAST(x) X(x)

    // post-increment
    fruit operator++ (fruit & f, int) noexcept {
        auto const prev = f;
        ++f;
        return prev;
    }

