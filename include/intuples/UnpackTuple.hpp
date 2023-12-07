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
// #define UNPACK_TYPENAMES_VARSX(TupleType)

#define UNPACK_TYPENAMES_VARS1(TT)                       \
  using v0_t = typename std::tuple_element<0, TT>::type; \
  v0_t v0;
#define UNPACK_TYPENAMES_VARS2(TT)                       \
  using v1_t = typename std::tuple_element<1, TT>::type; \
  v1_t v1;                                               \
  UNPACK_TYPENAMES_VARS1(TT)
#define UNPACK_TYPENAMES_VARS3(TT)                       \
  using v2_t = typename std::tuple_element<2, TT>::type; \
  v2_t v2;                                               \
  UNPACK_TYPENAMES_VARS2(TT)

}  // namespace intuples
