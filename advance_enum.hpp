#ifndef ADVANCE_ENUM_HPP
#define ADVANCE_ENUM_HPP

template <typename Enum, Enum First, Enum Head>
constexpr Enum advance_enum (Enum const v) noexcept {
    if (v == Head) {
        return First;
    }
    return v;
}

template <typename Enum, Enum First, Enum Head, Enum Next, Enum... Tail>
constexpr Enum advance_enum (Enum const v) noexcept {
    if (v == Head) {
        return Next;
    }
    return advance_enum<Enum, First, Next, Tail...> (v);
}

template <typename Enum, Enum First, Enum... Values>
struct enum_values {
    static constexpr Enum advance (Enum const v) noexcept {
        return advance_enum<Enum, First, First, Values...> (v);
    }
};

#endif // ADVANCE_ENUM_HPP
