cmake_minimum_required (VERSION 3.10)
project (advance_enum CXX)
add_executable (advance_enum
    advance_enum.hpp
    fruit.hpp
    fruit.cpp
    main.cpp
)
set_target_properties (advance_enum PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED Yes
    CXX_EXTENSIONS No
)
