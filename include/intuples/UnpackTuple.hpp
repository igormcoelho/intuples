// SPDX-License-Identifier:  MIT
// Copyright (C) 2023 - Prof. Igor Machado Coelho
//
#pragma once

#include <iostream>
#include <tuple>
#include <type_traits>

namespace intuples {

// Generates typenames and declares variables from Tuple
// Pattern is: v0, v1, v2, ... v0_t, v1_t, ...
#define UNPACK_TYPEDEFS_VARS3(TUP)                        \
  using v0_t = typename std::tuple_element<0, TUP>::type; \
  using v1_t = typename std::tuple_element<1, TUP>::type; \
  using v2_t = typename std::tuple_element<2, TUP>::type; \
  v0_t v0;                                                \
  v1_t v1;                                                \
  v2_t v2;

}  // namespace intuples
